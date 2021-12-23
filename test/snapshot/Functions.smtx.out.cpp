#include "runtime.h"

struct record_empty;
struct record_0;

struct record_empty : Collectable {
};
void new_record_empty() {
	record_empty* obj = (record_empty*) gcalloc(sizeof(record_empty), 0);
	pushRoot(obj);
}

struct record_0 : Collectable {
	Int* argument;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->argument = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_global_0;
void initializeGlobalVariables() {
	for (int i = 0; i < 1; i++) {
		new_Variable();
	}
	var_global_0 = (Variable*) getRoot(0);
}

struct closure_fun_12_0 : Collectable {
	Variable* local;
	Variable* argument;
};
void fun_12_0() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_12_0* closure = (closure_fun_12_0*) getRoot(1);
	
	{
		new_String("nested 1\n");
	}
	printstring();
	{
		pushRoot(closure->local->val);
	}
	printint();
	{
		pushRoot(var_global_0->val);
	}
	printint();
	{
		pushRoot(closure->argument->val);
	}
	printint();
	
	ret:
	popRoots(2);
}
void new_fun_12_0() {
	closure_fun_12_0* closure = (closure_fun_12_0*) gcalloc(sizeof(closure_fun_12_0), 2);
	closure->argument = (Variable*) popRoot();
	closure->local = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_12_0);
}
struct closure_fun_5_1 : Collectable {
};
void fun_5_1() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_5_1* closure = (closure_fun_5_1*) getRoot(1);
	new_Variable();
	Variable* arg_argument_1 = (Variable*) getRoot(0);
	arg_argument_1->val = arg->argument;
	new_Variable();
	Variable* var_local_2 = (Variable*) getRoot(0);
	
	{
		pushRoot(var_local_2->val);
	}
	printint();
	{
		pushRoot(var_global_0->val);
	}
	printint();
	{
		pushRoot(arg_argument_1->val);
	}
	printint();
	{
		pushRoot(var_local_2);
		pushRoot(arg_argument_1);
	}
	new_fun_12_0();
	popRoot();
	
	ret:
	popRoots(4);
}
void new_fun_5_1() {
	pushRoot(nullptr);
	new_Func(fun_5_1);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
	}
	new_fun_5_1();
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
