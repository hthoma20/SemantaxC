#include "runtime.h"

struct record_3;
struct record_4;
struct record_0;
struct record_2;
struct record_1;

struct record_3 : Collectable {
	Array* ar;
	Int* index;
	Int* val;
};
void new_record_3() {
	record_3* obj = (record_3*) gcalloc(sizeof(record_3), 3);
	obj->val = (Int*) popRoot();
	obj->index = (Int*) popRoot();
	obj->ar = (Array*) popRoot();
	pushRoot(obj);
}

struct record_4 : Collectable {
	Array* ar;
};
void new_record_4() {
	record_4* obj = (record_4*) gcalloc(sizeof(record_4), 1);
	obj->ar = (Array*) popRoot();
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

struct record_2 : Collectable {
	Array* ar;
	Int* index;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 2);
	obj->index = (Int*) popRoot();
	obj->ar = (Array*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	String* str;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->str = (String*) popRoot();
	pushRoot(obj);
}


Variable* var_bools_0;
Variable* var_ar_1;
void initializeGlobalVariables() {
	for (int i = 0; i < 2; i++) {
		new_Variable();
	}
	var_bools_0 = (Variable*) getRoot(0);
	var_ar_1 = (Variable*) getRoot(1);
}

struct closure_fun_4_0 : Collectable {
};
void fun_4_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_4_0* closure = (closure_fun_4_0*) getRoot(1);
	new_Variable();
	Variable* arg_n_2 = (Variable*) getRoot(0);
	arg_n_2->val = arg->n;
	
	{
		pushRoot(arg_n_2->val);
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
struct closure_fun_10_1 : Collectable {
};
void fun_10_1() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_10_1* closure = (closure_fun_10_1*) getRoot(1);
	new_Variable();
	Variable* arg_str_3 = (Variable*) getRoot(0);
	arg_str_3->val = arg->str;
	
	{
		pushRoot(arg_str_3->val);
	}
	printstring();
	{
		new_String("\n");
	}
	printstring();
	
	ret:
	popRoots(3);
}
void new_fun_10_1() {
	pushRoot(nullptr);
	new_Func(fun_10_1);
}
struct closure_fun_16_2 : Collectable {
};
void fun_16_2() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_16_2* closure = (closure_fun_16_2*) getRoot(1);
	new_Variable();
	Variable* arg_ar_4 = (Variable*) getRoot(0);
	arg_ar_4->val = arg->ar;
	new_Variable();
	Variable* arg_index_5 = (Variable*) getRoot(0);
	arg_index_5->val = arg->index;
	
	{
		pushRoot(arg_ar_4->val);
		pushRoot(arg_index_5->val);
	}
	arrayget();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_16_2() {
	pushRoot(nullptr);
	new_Func(fun_16_2);
}
struct closure_fun_21_3 : Collectable {
};
void fun_21_3() {
	record_3* arg = (record_3*) getRoot(0);
	closure_fun_21_3* closure = (closure_fun_21_3*) getRoot(1);
	new_Variable();
	Variable* arg_ar_6 = (Variable*) getRoot(0);
	arg_ar_6->val = arg->ar;
	new_Variable();
	Variable* arg_index_7 = (Variable*) getRoot(0);
	arg_index_7->val = arg->index;
	new_Variable();
	Variable* arg_val_8 = (Variable*) getRoot(0);
	arg_val_8->val = arg->val;
	
	{
		pushRoot(arg_ar_6->val);
		pushRoot(arg_index_7->val);
		pushRoot(arg_val_8->val);
	}
	arrayset();
	
	ret:
	popRoots(5);
}
void new_fun_21_3() {
	pushRoot(nullptr);
	new_Func(fun_21_3);
}
struct closure_fun_26_4 : Collectable {
};
void fun_26_4() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_26_4* closure = (closure_fun_26_4*) getRoot(1);
	new_Variable();
	Variable* arg_ar_9 = (Variable*) getRoot(0);
	arg_ar_9->val = arg->ar;
	new_Variable();
	Variable* arg_index_10 = (Variable*) getRoot(0);
	arg_index_10->val = arg->index;
	
	{
		pushRoot(arg_ar_9->val);
		pushRoot(arg_index_10->val);
	}
	arrayget();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_26_4() {
	pushRoot(nullptr);
	new_Func(fun_26_4);
}
struct closure_fun_31_5 : Collectable {
};
void fun_31_5() {
	record_4* arg = (record_4*) getRoot(0);
	closure_fun_31_5* closure = (closure_fun_31_5*) getRoot(1);
	new_Variable();
	Variable* arg_ar_11 = (Variable*) getRoot(0);
	arg_ar_11->val = arg->ar;
	
	{
		pushRoot(arg_ar_11->val);
	}
	arraylen();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(3);
	pushRoot(ret_val);
}
void new_fun_31_5() {
	pushRoot(nullptr);
	new_Func(fun_31_5);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			{
				new_Int(1);
				new_Int(2);
			}
			new_Array(2);
			new_Int(0);
		}
		new_record_2();
		fun_16_2();
	}
	new_record_0();
	fun_4_0();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			{
				new_String("hello");
				new_String("world");
			}
			new_Array(2);
			new_Int(1);
		}
		new_record_2();
		fun_26_4();
	}
	new_record_1();
	fun_10_1();
	{
		new_Int(0);
		new_Int(2);
		new_Int(4);
	}
	new_Array(3);
	var_ar_1->val = popRoot();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_ar_1->val);
			new_Int(1);
		}
		new_record_2();
		fun_16_2();
	}
	new_record_0();
	fun_4_0();
	// closure for pattern
	pushRoot(nullptr);
	{
		pushRoot(var_ar_1->val);
		new_Int(1);
		new_Int(7);
	}
	new_record_3();
	fun_21_3();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_ar_1->val);
			new_Int(1);
		}
		new_record_2();
		fun_16_2();
	}
	new_record_0();
	fun_4_0();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			{
				new_Bool(true);
			}
			new_Array(1);
		}
		new_record_4();
		fun_31_5();
	}
	new_record_0();
	fun_4_0();
	{
		new_Bool(true);
		new_Bool(false);
		new_Bool(false);
	}
	new_Array(3);
	var_bools_0->val = popRoot();
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(var_bools_0->val);
		}
		new_record_4();
		fun_31_5();
	}
	new_record_0();
	fun_4_0();
	
	finalizeGarbageCollector();
	return 0;
}
