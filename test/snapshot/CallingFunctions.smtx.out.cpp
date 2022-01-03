#include "runtime.h"

struct record_0;
struct record_1;
struct record_empty;
struct record_2;

struct record_0 : Collectable {
	Int* i;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->i = (Int*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	String* arg;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->arg = (String*) popRoot();
	pushRoot(obj);
}

struct record_empty : Collectable {
};
void new_record_empty() {
	record_empty* obj = (record_empty*) gcalloc(sizeof(record_empty), 0);
	pushRoot(obj);
}

struct record_2 : Collectable {
	Int* x;
	Int* y;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 2);
	obj->y = (Int*) popRoot();
	obj->x = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_sum_0;
Variable* var_printX_1;
Variable* var_x_2;
Variable* var_incX_3;
void initializeGlobalVariables() {
	for (int i = 0; i < 4; i++) {
		new_Variable();
	}
	var_sum_0 = (Variable*) getRoot(0);
	var_printX_1 = (Variable*) getRoot(1);
	var_x_2 = (Variable*) getRoot(2);
	var_incX_3 = (Variable*) getRoot(3);
}

struct closure_fun_4_0 : Collectable {
};
void fun_4_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_4_0* closure = (closure_fun_4_0*) getRoot(1);
	new_Variable();
	Variable* arg_i_4 = (Variable*) getRoot(0);
	arg_i_4->val = arg->i;
	
	{
		pushRoot(arg_i_4->val);
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	ret:
	popRoots(3);
}
void new_fun_4_0() {
	pushRoot(nullptr);
	new_Func(fun_4_0);
}
struct closure_fun_9_1 : Collectable {
};
void fun_9_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_9_1* closure = (closure_fun_9_1*) getRoot(1);
	new_Variable();
	Variable* arg_arg_5 = (Variable*) getRoot(0);
	arg_arg_5->val = arg->arg;
	
	{
		new_String("Hello, ");
	}
	printstring();
	{
		pushRoot(arg_arg_5->val);
	}
	printstring();
	{
		new_String("!\n");
	}
	printstring();
	
	ret:
	popRoots(3);
}
void new_fun_9_1() {
	pushRoot(nullptr);
	new_Func(fun_9_1);
}
struct closure_fun_17_2 : Collectable {
};
void fun_17_2() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_17_2* closure = (closure_fun_17_2*) getRoot(1);
	new_Variable();
	Variable* arg_x_6 = (Variable*) getRoot(0);
	arg_x_6->val = arg->x;
	new_Variable();
	Variable* arg_y_7 = (Variable*) getRoot(0);
	arg_y_7->val = arg->y;
	
	{
		pushRoot(arg_x_6->val);
		pushRoot(arg_y_7->val);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_17_2() {
	pushRoot(nullptr);
	new_Func(fun_17_2);
}
struct closure_fun_29_3 : Collectable {
};
void fun_29_3() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_29_3* closure = (closure_fun_29_3*) getRoot(1);
	
	{
		pushRoot(var_x_2->val);
		new_Int(1);
	}
	addint();
	var_x_2->val = popRoot();
	
	ret:
	popRoots(2);
}
void new_fun_29_3() {
	pushRoot(nullptr);
	new_Func(fun_29_3);
}
struct closure_fun_34_4 : Collectable {
};
void fun_34_4() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_34_4* closure = (closure_fun_34_4*) getRoot(1);
	
	// closure for pattern
	pushRoot(nullptr);
	{
		pushRoot(var_x_2->val);
	}
	new_record_0();
	fun_4_0();
	
	ret:
	popRoots(2);
}
void new_fun_34_4() {
	pushRoot(nullptr);
	new_Func(fun_34_4);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
		{
		}
		new_fun_9_1();
		{
			new_String("Harry");
		}
		new_record_1();
	}
	invokefun();
	{
	}
	new_fun_17_2();
	var_sum_0->val = popRoot();
	{
		new_String("Sum (1+2): ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_sum_0->val);
			{
				new_Int(1);
				new_Int(2);
			}
			new_record_2();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	new_Int(0);
	var_x_2->val = popRoot();
	{
	}
	new_fun_29_3();
	var_incX_3->val = popRoot();
	{
	}
	new_fun_34_4();
	var_printX_1->val = popRoot();
	{
		new_String("x before inc: ");
	}
	printstring();
	{
		pushRoot(var_printX_1->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	{
		pushRoot(var_incX_3->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	{
		new_String("x after inc: ");
	}
	printstring();
	{
		pushRoot(var_printX_1->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	
	finalizeGarbageCollector();
	return 0;
}
