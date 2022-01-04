#include "runtime.h"

struct record_0;
struct record_1;
struct record_3;
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

struct record_3 : Collectable {
	Int* a;
};
void new_record_3() {
	record_3* obj = (record_3*) gcalloc(sizeof(record_3), 1);
	obj->a = (Int*) popRoot();
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


Variable* var_counter2_0;
Variable* var_sum_1;
Variable* var_printX_2;
Variable* var_incX_3;
Variable* var_getCounter_4;
Variable* var_x_5;
Variable* var_add3_6;
Variable* var_counter1_7;
void initializeGlobalVariables() {
	for (int i = 0; i < 8; i++) {
		new_Variable();
	}
	var_counter2_0 = (Variable*) getRoot(0);
	var_sum_1 = (Variable*) getRoot(1);
	var_printX_2 = (Variable*) getRoot(2);
	var_incX_3 = (Variable*) getRoot(3);
	var_getCounter_4 = (Variable*) getRoot(4);
	var_x_5 = (Variable*) getRoot(5);
	var_add3_6 = (Variable*) getRoot(6);
	var_counter1_7 = (Variable*) getRoot(7);
}

struct closure_fun_4_0 : Collectable {
};
void fun_4_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_4_0* closure = (closure_fun_4_0*) getRoot(1);
	new_Variable();
	Variable* arg_i_8 = (Variable*) getRoot(0);
	arg_i_8->val = arg->i;
	
	{
		pushRoot(arg_i_8->val);
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
	Variable* arg_arg_9 = (Variable*) getRoot(0);
	arg_arg_9->val = arg->arg;
	
	{
		new_String("Hello, ");
	}
	printstring();
	{
		pushRoot(arg_arg_9->val);
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
	Variable* arg_x_10 = (Variable*) getRoot(0);
	arg_x_10->val = arg->x;
	new_Variable();
	Variable* arg_y_11 = (Variable*) getRoot(0);
	arg_y_11->val = arg->y;
	
	{
		pushRoot(arg_x_10->val);
		pushRoot(arg_y_11->val);
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
		pushRoot(var_x_5->val);
		new_Int(1);
	}
	addint();
	var_x_5->val = popRoot();
	
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
		pushRoot(var_x_5->val);
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
struct closure_fun_46_5 : Collectable {
};
void fun_46_5() {
	record_3* arg = (record_3*) getRoot(0);
	closure_fun_46_5* closure = (closure_fun_46_5*) getRoot(1);
	new_Variable();
	Variable* arg_a_12 = (Variable*) getRoot(0);
	arg_a_12->val = arg->a;
	new_Variable();
	Variable* var_sum_13 = (Variable*) getRoot(0);
	
	{
		pushRoot(arg_a_12->val);
		new_Int(3);
	}
	addint();
	var_sum_13->val = popRoot();
	pushRoot(var_sum_13->val);
	goto ret;
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_46_5() {
	pushRoot(nullptr);
	new_Func(fun_46_5);
}
struct closure_fun_60_6 : Collectable {
	Variable* count;
};
void fun_60_6() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_60_6* closure = (closure_fun_60_6*) getRoot(1);
	
	{
		pushRoot(closure->count->val);
		new_Int(1);
	}
	addint();
	closure->count->val = popRoot();
	pushRoot(closure->count->val);
	goto ret;
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(2);
	pushRoot(ret_val);
}
void new_fun_60_6() {
	closure_fun_60_6* closure = (closure_fun_60_6*) gcalloc(sizeof(closure_fun_60_6), 1);
	closure->count = (Variable*) popRoot();
	pushRoot(closure);
	new_Func(fun_60_6);
}
struct closure_fun_56_7 : Collectable {
};
void fun_56_7() {
	record_empty* arg = (record_empty*) getRoot(0);
	closure_fun_56_7* closure = (closure_fun_56_7*) getRoot(1);
	new_Variable();
	Variable* var_count_14 = (Variable*) getRoot(0);
	
	new_Int(0);
	var_count_14->val = popRoot();
	{
		pushRoot(var_count_14);
	}
	new_fun_60_6();
	goto ret;
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(3);
	pushRoot(ret_val);
}
void new_fun_56_7() {
	pushRoot(nullptr);
	new_Func(fun_56_7);
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
	var_sum_1->val = popRoot();
	{
		new_String("Sum (1+2): ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_sum_1->val);
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
	var_x_5->val = popRoot();
	{
	}
	new_fun_29_3();
	var_incX_3->val = popRoot();
	{
	}
	new_fun_34_4();
	var_printX_2->val = popRoot();
	{
		new_String("x before inc: ");
	}
	printstring();
	{
		pushRoot(var_printX_2->val);
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
		pushRoot(var_printX_2->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	{
	}
	new_fun_46_5();
	var_add3_6->val = popRoot();
	{
		new_String("Return (2+3): ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_add3_6->val);
			{
				new_Int(2);
			}
			new_record_3();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	{
	}
	new_fun_56_7();
	var_getCounter_4->val = popRoot();
	{
		pushRoot(var_getCounter_4->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	var_counter1_7->val = popRoot();
	{
		new_String("counter1: ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_counter1_7->val);
			{
			}
			new_record_empty();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	{
		pushRoot(var_getCounter_4->val);
		{
		}
		new_record_empty();
	}
	invokefun();
	var_counter2_0->val = popRoot();
	{
		new_String("counter2: ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_counter2_0->val);
			{
			}
			new_record_empty();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	{
		new_String("counter2: ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_counter2_0->val);
			{
			}
			new_record_empty();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	{
		new_String("counter1: ");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		{
			pushRoot(var_counter1_7->val);
			{
			}
			new_record_empty();
		}
		invokefun();
	}
	new_record_0();
	fun_4_0();
	
	finalizeGarbageCollector();
	return 0;
}
