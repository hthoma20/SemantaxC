#include "runtime.h"

struct record_2;
struct record_0;
struct record_1;

struct record_2 : Collectable {
	Int* x;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 1);
	obj->x = (Int*) popRoot();
	pushRoot(obj);
}

struct record_0 : Collectable {
	Int* n;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->n = (Int*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	Int* a;
	Int* b;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 2);
	obj->b = (Int*) popRoot();
	obj->a = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_x_0;
void initializeGlobalVariables() {
	for (int i = 0; i < 1; i++) {
		new_Variable();
	}
	var_x_0 = (Variable*) getRoot(0);
}

struct closure_fun_5_0 : Collectable {
};
void fun_5_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_5_0* closure = (closure_fun_5_0*) getRoot(1);
	new_Variable();
	Variable* arg_n_1 = (Variable*) getRoot(0);
	arg_n_1->val = arg->n;
	
	{
		pushRoot(arg_n_1->val);
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	ret:
	popRoots(3);
}
void new_fun_5_0() {
	pushRoot(nullptr);
	new_Func(fun_5_0);
}
struct closure_fun_11_1 : Collectable {
};
void fun_11_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_11_1* closure = (closure_fun_11_1*) getRoot(1);
	new_Variable();
	Variable* arg_a_2 = (Variable*) getRoot(0);
	arg_a_2->val = arg->a;
	new_Variable();
	Variable* arg_b_3 = (Variable*) getRoot(0);
	arg_b_3->val = arg->b;
	
	{
		pushRoot(arg_a_2->val);
		pushRoot(arg_b_3->val);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_11_1() {
	pushRoot(nullptr);
	new_Func(fun_11_1);
}
struct closure_fun_16_2 : Collectable {
};
void fun_16_2() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_16_2* closure = (closure_fun_16_2*) getRoot(1);
	new_Variable();
	Variable* arg_n_4 = (Variable*) getRoot(0);
	arg_n_4->val = arg->n;
	new_Variable();
	Variable* var_x_5 = (Variable*) getRoot(0);
	new_Variable();
	Variable* var_y_6 = (Variable*) getRoot(0);
	new_Variable();
	Variable* var_sum_7 = (Variable*) getRoot(0);
	
	new_Int(1);
	var_x_5->val = popRoot();
	new_Int(2);
	var_y_6->val = popRoot();
	// closure for pattern
	pushRoot(nullptr);
	{
		pushRoot(var_x_5->val);
		pushRoot(var_y_6->val);
	}
	new_record_1();
	fun_11_1();
	var_sum_7->val = popRoot();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_sum_7->val);
			pushRoot(arg_n_4->val);
		}
		new_record_1();
		fun_11_1();
	}
	new_record_0();
	fun_5_0();
	
	ret:
	popRoots(6);
}
void new_fun_16_2() {
	pushRoot(nullptr);
	new_Func(fun_16_2);
}
struct closure_fun_35_3 : Collectable {
};
void fun_35_3() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_35_3* closure = (closure_fun_35_3*) getRoot(1);
	new_Variable();
	Variable* arg_x_8 = (Variable*) getRoot(0);
	arg_x_8->val = arg->x;
	
	{
		new_Int(6);
		pushRoot(arg_x_8->val);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(3);
	pushRoot(ret_val);
}
void new_fun_35_3() {
	pushRoot(nullptr);
	new_Func(fun_35_3);
}
struct closure_fun_40_4 : Collectable {
};
void fun_40_4() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_40_4* closure = (closure_fun_40_4*) getRoot(1);
	new_Variable();
	Variable* arg_n_9 = (Variable*) getRoot(0);
	arg_n_9->val = arg->n;
	
	pushRoot(arg_n_9->val);
	var_x_0->val = popRoot();
	
	ret:
	popRoots(3);
}
void new_fun_40_4() {
	pushRoot(nullptr);
	new_Func(fun_40_4);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	// closure for pattern
	pushRoot(nullptr);
	{
		new_Int(5);
	}
	new_record_0();
	fun_16_2();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_Int(10);
	}
	new_record_0();
	fun_16_2();
	new_Int(10);
	var_x_0->val = popRoot();
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_x_0->val);
		}
		new_record_2();
		fun_35_3();
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
	new_record_0();
	fun_40_4();
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_x_0->val);
		}
		new_record_2();
		fun_35_3();
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	finalizeGarbageCollector();
	return 0;
}
