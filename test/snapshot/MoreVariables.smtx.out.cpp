#include "runtime.h"

struct record_0;

struct record_0 : Collectable {
	Int* x;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->x = (Int*) popRoot();
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
	
	finalizeGarbageCollector();
	return 0;
}
