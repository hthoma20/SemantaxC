#include "runtime.h"

struct record_1;
struct record_2;
struct record_0;

struct record_1 : Collectable {
	Int* n;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->n = (Int*) popRoot();
	pushRoot(obj);
}

struct record_2 : Collectable {
	String* str;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 1);
	obj->str = (String*) popRoot();
	pushRoot(obj);
}

struct record_0 : Collectable {
	Int* a;
	Int* b;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 2);
	obj->b = (Int*) popRoot();
	obj->a = (Int*) popRoot();
	pushRoot(obj);
}



// $ a + b $
struct closure_fun_5_0 : Collectable {};
void fun_5_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_5_0* closure = (closure_fun_5_0*) getRoot(1);
	
	{
		pushRoot(arg->a);
		pushRoot(arg->b);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(2);
	pushRoot(ret_val);
}

// $ print n $
struct closure_fun_10_1 : Collectable {};
void fun_10_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_10_1* closure = (closure_fun_10_1*) getRoot(1);
	
	{
		pushRoot(arg->n);
	}
	printint();
	
	ret:
	popRoots(2);
}

// $ print str $
struct closure_fun_15_2 : Collectable {};
void fun_15_2() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_15_2* closure = (closure_fun_15_2*) getRoot(1);
	
	{
		pushRoot(arg->str);
	}
	printstring();
	
	ret:
	popRoots(2);
}

// $ println n $
struct closure_fun_20_3 : Collectable {};
void fun_20_3() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_20_3* closure = (closure_fun_20_3*) getRoot(1);
	
	// closure for pattern
	pushRoot(nullptr);
	{
		pushRoot(arg->n);
	}
	new_record_1();
	fun_10_1();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("\n");
	}
	new_record_2();
	fun_15_2();
	
	ret:
	popRoots(2);
}


int main(int argc, char* argv[]) {
	
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(5);
			new_Int(4);
		}
		new_record_0();
		fun_5_0();
	}
	new_record_1();
	fun_20_3();
	
	finalizeGarbageCollector();
	return 0;
}
