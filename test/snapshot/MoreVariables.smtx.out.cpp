#include "runtime.h"

struct record_0;
struct record_1;

struct record_0 : Collectable {
	Int* x;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->x = (Int*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	Int* n;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->n = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_x_0;
void initializeGlobalVariables() {
	for (int i = 0; i < 1; i++) {
		new_Variable();
	}
	var_x_0 = (Variable*) getRoot(0);
}

struct closure_fun_7_0 : Collectable {
};
void fun_7_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_7_0* closure = (closure_fun_7_0*) getRoot(1);
	new_Variable();
	Variable* arg_x_1 = (Variable*) getRoot(0);
	arg_x_1->val = arg->x;
	
	{
		new_Int(6);
		pushRoot(arg_x_1->val);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(3);
	pushRoot(ret_val);
}
void new_fun_7_0() {
	pushRoot(nullptr);
	new_Func(fun_7_0);
}
struct closure_fun_12_1 : Collectable {
};
void fun_12_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_12_1* closure = (closure_fun_12_1*) getRoot(1);
	new_Variable();
	Variable* arg_n_2 = (Variable*) getRoot(0);
	arg_n_2->val = arg->n;
	
	pushRoot(arg_n_2->val);
	var_x_0->val = popRoot();
	
	ret:
	popRoots(3);
}
void new_fun_12_1() {
	pushRoot(nullptr);
	new_Func(fun_12_1);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	new_Int(10);
	var_x_0->val = popRoot();
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_x_0->val);
		}
		new_record_0();
		fun_7_0();
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_Int(6);
	}
	new_record_1();
	fun_12_1();
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_x_0->val);
		}
		new_record_0();
		fun_7_0();
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	finalizeGarbageCollector();
	return 0;
}
