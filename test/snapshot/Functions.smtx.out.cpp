#include "runtime.h"

struct record_0;

struct record_0 : Collectable {
	Int* local;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->local = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_global_0;

struct closure_fun_9_0 {
	Variable* local;
};
void fun_9_0() {
	void* arg = (void*) getRoot(0);
	closure_fun_9_0* closure = (closure_fun_9_0*) getRoot(1);
	
	{
		new_String("nested\n");
	}
	printstring();
	{
		pushRoot(closure->local->val);
	}
	printint();
	
	ret:
	popRoots(2);
}
void new_fun_9_0() {
	closure_fun_9_0* closure = (closure_fun_9_0*) gcalloc(sizeof(closure_fun_9_0), 1);
	closure->local = (Variable*) popRoot();
	new_Func(fun_9_0);
}
struct closure_fun_5_1 {
};
void fun_5_1() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_5_1* closure = (closure_fun_5_1*) getRoot(1);
	
	{
		pushRoot(arg->local);
	}
	printint();
	{
		pushRoot(var_global_0->val);
	}
	printint();
	// Function lit on line 9
	popRoot();
	
	ret:
	popRoots(2);
}
void new_fun_5_1() {
	pushRoot(nullptr);
	new_Func(fun_5_1);
}

int main(int argc, char* argv[]) {
	new_Variable();
	var_global_0 = (Variable*) popRoot();
	pushRoot(var_global_0);
	
	// Function lit on line 5
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
