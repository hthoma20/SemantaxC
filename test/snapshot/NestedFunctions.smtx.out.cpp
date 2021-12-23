#include "runtime.h"

struct record_2;
struct record_1;
struct record_3;
struct record_empty;
struct record_0;

struct record_2 : Collectable {
	Int* outer;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 1);
	obj->outer = (Int*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	Int* nestedArg;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->nestedArg = (Int*) popRoot();
	pushRoot(obj);
}

struct record_3 : Collectable {
	Int* inner;
};
void new_record_3() {
	record_3* obj = (record_3*) gcalloc(sizeof(record_3), 1);
	obj->inner = (Int*) popRoot();
	pushRoot(obj);
}

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

struct closure_fun_19_0 : Collectable {
	Variable* local;
	Variable* argument;
	Variable* nestedArg;
};
void fun_19_0() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_19_0* closure = (closure_fun_19_0*) getRoot(1);
	
	{
		new_String("nested 2\n");
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
	{
		pushRoot(closure->nestedArg->val);
	}
	printint();
	
	ret:
	popRoots(2);
}
void new_fun_19_0() {
	closure_fun_19_0* closure = (closure_fun_19_0*) gcalloc(sizeof(closure_fun_19_0), 3);
	closure->nestedArg = (Variable*) popRoot();
	closure->argument = (Variable*) popRoot();
	closure->local = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_19_0);
}
struct closure_fun_12_1 : Collectable {
	Variable* local;
	Variable* argument;
};
void fun_12_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_12_1* closure = (closure_fun_12_1*) getRoot(1);
	new_Variable();
	Variable* arg_nestedArg_1 = (Variable*) getRoot(0);
	arg_nestedArg_1->val = arg->nestedArg;
	
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
	{
		pushRoot(arg_nestedArg_1->val);
	}
	printint();
	{
		pushRoot(closure->local);
		pushRoot(closure->argument);
		pushRoot(arg_nestedArg_1);
	}
	new_fun_19_0();
	popRoot();
	
	ret:
	popRoots(3);
}
void new_fun_12_1() {
	closure_fun_12_1* closure = (closure_fun_12_1*) gcalloc(sizeof(closure_fun_12_1), 2);
	closure->argument = (Variable*) popRoot();
	closure->local = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_12_1);
}
struct closure_fun_5_2 : Collectable {
};
void fun_5_2() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_5_2* closure = (closure_fun_5_2*) getRoot(1);
	new_Variable();
	Variable* arg_argument_2 = (Variable*) getRoot(0);
	arg_argument_2->val = arg->argument;
	new_Variable();
	Variable* var_local_3 = (Variable*) getRoot(0);
	
	{
		pushRoot(var_local_3->val);
	}
	printint();
	{
		pushRoot(var_global_0->val);
	}
	printint();
	{
		pushRoot(arg_argument_2->val);
	}
	printint();
	{
		pushRoot(var_local_3);
		pushRoot(arg_argument_2);
	}
	new_fun_12_1();
	popRoot();
	
	ret:
	popRoots(4);
}
void new_fun_5_2() {
	pushRoot(nullptr);
	new_Func(fun_5_2);
}
struct closure_fun_34_3 : Collectable {
	Variable* outer;
	Variable* outerLocal;
	Variable* inner;
};
void fun_34_3() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_34_3* closure = (closure_fun_34_3*) getRoot(1);
	
	{
		pushRoot(closure->outer->val);
	}
	printint();
	{
		pushRoot(closure->outerLocal->val);
	}
	printint();
	{
		pushRoot(closure->inner->val);
	}
	printint();
	
	ret:
	popRoots(2);
}
void new_fun_34_3() {
	closure_fun_34_3* closure = (closure_fun_34_3*) gcalloc(sizeof(closure_fun_34_3), 3);
	closure->inner = (Variable*) popRoot();
	closure->outerLocal = (Variable*) popRoot();
	closure->outer = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_34_3);
}
struct closure_fun_33_4 : Collectable {
	Variable* outer;
	Variable* outerLocal;
};
void fun_33_4() {
	record_3* arg = (record_3*) getRoot(0);
	closure_fun_33_4* closure = (closure_fun_33_4*) getRoot(1);
	new_Variable();
	Variable* arg_inner_4 = (Variable*) getRoot(0);
	arg_inner_4->val = arg->inner;
	
	{
		pushRoot(closure->outer);
		pushRoot(closure->outerLocal);
		pushRoot(arg_inner_4);
	}
	new_fun_34_3();
	popRoot();
	
	ret:
	popRoots(3);
}
void new_fun_33_4() {
	closure_fun_33_4* closure = (closure_fun_33_4*) gcalloc(sizeof(closure_fun_33_4), 2);
	closure->outerLocal = (Variable*) popRoot();
	closure->outer = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_33_4);
}
struct closure_fun_31_5 : Collectable {
};
void fun_31_5() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_31_5* closure = (closure_fun_31_5*) getRoot(1);
	new_Variable();
	Variable* arg_outer_5 = (Variable*) getRoot(0);
	arg_outer_5->val = arg->outer;
	new_Variable();
	Variable* var_outerLocal_6 = (Variable*) getRoot(0);
	
	{
		pushRoot(arg_outer_5);
		pushRoot(var_outerLocal_6);
	}
	new_fun_33_4();
	popRoot();
	
	ret:
	popRoots(4);
}
void new_fun_31_5() {
	pushRoot(nullptr);
	new_Func(fun_31_5);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
	}
	new_fun_5_2();
	popRoot();
	{
	}
	new_fun_31_5();
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
