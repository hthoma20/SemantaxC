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



void pattern_ab_0() {
	record_0* arg = (record_0*) getRoot(0);
	
	{
		pushRoot(arg->a);
		pushRoot(arg->b);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(1);
	pushRoot(ret_val);
}

void pattern_printn_1() {
	record_1* arg = (record_1*) getRoot(0);
	
	{
		pushRoot(arg->n);
	}
	printint();
	
	ret:
	popRoots(1);
}

void pattern_printstr_2() {
	record_2* arg = (record_2*) getRoot(0);
	
	{
		pushRoot(arg->str);
	}
	printstring();
	
	ret:
	popRoots(1);
}

void pattern_printlnn_3() {
	record_1* arg = (record_1*) getRoot(0);
	
	{
		pushRoot(arg->n);
	}
	new_record_1();
	pattern_printn_1();
	{
		new_String("\n");
	}
	new_record_2();
	pattern_printstr_2();
	
	ret:
	popRoots(1);
}


int main(int argc, char* argv[]) {
	
	{
		{
			new_Int(5);
			new_Int(4);
		}
		new_record_0();
		pattern_ab_0();
	}
	new_record_1();
	pattern_printlnn_3();
	
	finalizeGarbageCollector();
	return 0;
}
