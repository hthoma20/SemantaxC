#include "runtime.h"

struct record_4;
struct record_1;
struct record_2;
struct record_3;
struct record_0;

struct record_4 : Collectable {
	String* message;
	Bool* val;
	Bool* expectedVal;
};
void new_record_4() {
	record_4* obj = (record_4*) gcalloc(sizeof(record_4), 3);
	obj->expectedVal = (Bool*) popRoot();
	obj->val = (Bool*) popRoot();
	obj->message = (String*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	Bool* b;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 1);
	obj->b = (Bool*) popRoot();
	pushRoot(obj);
}

struct record_2 : Collectable {
	Bool* a;
	Bool* b;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 2);
	obj->b = (Bool*) popRoot();
	obj->a = (Bool*) popRoot();
	pushRoot(obj);
}

struct record_3 : Collectable {
	String* message;
	Int* val;
	Int* expectedVal;
};
void new_record_3() {
	record_3* obj = (record_3*) gcalloc(sizeof(record_3), 3);
	obj->expectedVal = (Int*) popRoot();
	obj->val = (Int*) popRoot();
	obj->message = (String*) popRoot();
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


void initializeGlobalVariables() {
	for (int i = 0; i < 0; i++) {
		new_Variable();
	}
}

struct closure_fun_4_0 : Collectable {
};
void fun_4_0() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_4_0* closure = (closure_fun_4_0*) getRoot(1);
	new_Variable();
	Variable* arg_a_0 = (Variable*) getRoot(0);
	arg_a_0->val = arg->a;
	new_Variable();
	Variable* arg_b_1 = (Variable*) getRoot(0);
	arg_b_1->val = arg->b;
	
	{
		pushRoot(arg_a_0->val);
		pushRoot(arg_b_1->val);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_4_0() {
	pushRoot(nullptr);
	new_Func(fun_4_0);
}
struct closure_fun_9_1 : Collectable {
};
void fun_9_1() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_9_1* closure = (closure_fun_9_1*) getRoot(1);
	new_Variable();
	Variable* arg_a_2 = (Variable*) getRoot(0);
	arg_a_2->val = arg->a;
	new_Variable();
	Variable* arg_b_3 = (Variable*) getRoot(0);
	arg_b_3->val = arg->b;
	
	// closure for pattern
	pushRoot(nullptr);
	{
		pushRoot(arg_a_2->val);
		{
			pushRoot(arg_b_3->val);
		}
		negateint();
	}
	new_record_0();
	fun_4_0();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_9_1() {
	pushRoot(nullptr);
	new_Func(fun_9_1);
}
struct closure_fun_14_2 : Collectable {
};
void fun_14_2() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_14_2* closure = (closure_fun_14_2*) getRoot(1);
	new_Variable();
	Variable* arg_a_4 = (Variable*) getRoot(0);
	arg_a_4->val = arg->a;
	new_Variable();
	Variable* arg_b_5 = (Variable*) getRoot(0);
	arg_b_5->val = arg->b;
	
	{
		pushRoot(arg_a_4->val);
		pushRoot(arg_b_5->val);
	}
	gteint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_14_2() {
	pushRoot(nullptr);
	new_Func(fun_14_2);
}
struct closure_fun_19_3 : Collectable {
};
void fun_19_3() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_19_3* closure = (closure_fun_19_3*) getRoot(1);
	new_Variable();
	Variable* arg_a_6 = (Variable*) getRoot(0);
	arg_a_6->val = arg->a;
	new_Variable();
	Variable* arg_b_7 = (Variable*) getRoot(0);
	arg_b_7->val = arg->b;
	
	{
		pushRoot(arg_b_7->val);
		pushRoot(arg_a_6->val);
	}
	gteint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_19_3() {
	pushRoot(nullptr);
	new_Func(fun_19_3);
}
struct closure_fun_24_4 : Collectable {
};
void fun_24_4() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_24_4* closure = (closure_fun_24_4*) getRoot(1);
	new_Variable();
	Variable* arg_a_8 = (Variable*) getRoot(0);
	arg_a_8->val = arg->a;
	new_Variable();
	Variable* arg_b_9 = (Variable*) getRoot(0);
	arg_b_9->val = arg->b;
	
	{
		pushRoot(arg_a_8->val);
		pushRoot(arg_b_9->val);
	}
	gtint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_24_4() {
	pushRoot(nullptr);
	new_Func(fun_24_4);
}
struct closure_fun_29_5 : Collectable {
};
void fun_29_5() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_29_5* closure = (closure_fun_29_5*) getRoot(1);
	new_Variable();
	Variable* arg_a_10 = (Variable*) getRoot(0);
	arg_a_10->val = arg->a;
	new_Variable();
	Variable* arg_b_11 = (Variable*) getRoot(0);
	arg_b_11->val = arg->b;
	
	{
		pushRoot(arg_b_11->val);
		pushRoot(arg_a_10->val);
	}
	gtint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_29_5() {
	pushRoot(nullptr);
	new_Func(fun_29_5);
}
struct closure_fun_34_6 : Collectable {
};
void fun_34_6() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_34_6* closure = (closure_fun_34_6*) getRoot(1);
	new_Variable();
	Variable* arg_a_12 = (Variable*) getRoot(0);
	arg_a_12->val = arg->a;
	new_Variable();
	Variable* arg_b_13 = (Variable*) getRoot(0);
	arg_b_13->val = arg->b;
	
	{
		pushRoot(arg_a_12->val);
		pushRoot(arg_b_13->val);
	}
	eqint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_34_6() {
	pushRoot(nullptr);
	new_Func(fun_34_6);
}
struct closure_fun_39_7 : Collectable {
};
void fun_39_7() {
	record_1* arg = (record_1*) getRoot(0);
	closure_fun_39_7* closure = (closure_fun_39_7*) getRoot(1);
	new_Variable();
	Variable* arg_b_14 = (Variable*) getRoot(0);
	arg_b_14->val = arg->b;
	
	{
		pushRoot(arg_b_14->val);
	}
	negatebool();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(3);
	pushRoot(ret_val);
}
void new_fun_39_7() {
	pushRoot(nullptr);
	new_Func(fun_39_7);
}
struct closure_fun_44_8 : Collectable {
};
void fun_44_8() {
	record_0* arg = (record_0*) getRoot(0);
	closure_fun_44_8* closure = (closure_fun_44_8*) getRoot(1);
	new_Variable();
	Variable* arg_a_15 = (Variable*) getRoot(0);
	arg_a_15->val = arg->a;
	new_Variable();
	Variable* arg_b_16 = (Variable*) getRoot(0);
	arg_b_16->val = arg->b;
	
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(arg_a_15->val);
			pushRoot(arg_b_16->val);
		}
		new_record_0();
		fun_34_6();
	}
	new_record_1();
	fun_39_7();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_44_8() {
	pushRoot(nullptr);
	new_Func(fun_44_8);
}
struct closure_fun_49_9 : Collectable {
};
void fun_49_9() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_49_9* closure = (closure_fun_49_9*) getRoot(1);
	new_Variable();
	Variable* arg_a_17 = (Variable*) getRoot(0);
	arg_a_17->val = arg->a;
	new_Variable();
	Variable* arg_b_18 = (Variable*) getRoot(0);
	arg_b_18->val = arg->b;
	
	{
		pushRoot(arg_a_17->val);
		pushRoot(arg_b_18->val);
	}
	andbool();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_49_9() {
	pushRoot(nullptr);
	new_Func(fun_49_9);
}
struct closure_fun_54_10 : Collectable {
};
void fun_54_10() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_54_10* closure = (closure_fun_54_10*) getRoot(1);
	new_Variable();
	Variable* arg_a_19 = (Variable*) getRoot(0);
	arg_a_19->val = arg->a;
	new_Variable();
	Variable* arg_b_20 = (Variable*) getRoot(0);
	arg_b_20->val = arg->b;
	
	{
		pushRoot(arg_a_19->val);
		pushRoot(arg_b_20->val);
	}
	orbool();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_54_10() {
	pushRoot(nullptr);
	new_Func(fun_54_10);
}
struct closure_fun_59_11 : Collectable {
};
void fun_59_11() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_59_11* closure = (closure_fun_59_11*) getRoot(1);
	new_Variable();
	Variable* arg_a_21 = (Variable*) getRoot(0);
	arg_a_21->val = arg->a;
	new_Variable();
	Variable* arg_b_22 = (Variable*) getRoot(0);
	arg_b_22->val = arg->b;
	
	{
		pushRoot(arg_a_21->val);
		pushRoot(arg_b_22->val);
	}
	eqbool();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_59_11() {
	pushRoot(nullptr);
	new_Func(fun_59_11);
}
struct closure_fun_64_12 : Collectable {
};
void fun_64_12() {
	record_2* arg = (record_2*) getRoot(0);
	closure_fun_64_12* closure = (closure_fun_64_12*) getRoot(1);
	new_Variable();
	Variable* arg_a_23 = (Variable*) getRoot(0);
	arg_a_23->val = arg->a;
	new_Variable();
	Variable* arg_b_24 = (Variable*) getRoot(0);
	arg_b_24->val = arg->b;
	
	// closure for pattern
	pushRoot(nullptr);
	{
		// closure for pattern
		pushRoot(nullptr);
		{
			pushRoot(arg_a_23->val);
			pushRoot(arg_b_24->val);
		}
		new_record_2();
		fun_59_11();
	}
	new_record_1();
	fun_39_7();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(4);
	pushRoot(ret_val);
}
void new_fun_64_12() {
	pushRoot(nullptr);
	new_Func(fun_64_12);
}
struct closure_fun_69_13 : Collectable {
};
void fun_69_13() {
	record_3* arg = (record_3*) getRoot(0);
	closure_fun_69_13* closure = (closure_fun_69_13*) getRoot(1);
	new_Variable();
	Variable* arg_message_25 = (Variable*) getRoot(0);
	arg_message_25->val = arg->message;
	new_Variable();
	Variable* arg_val_26 = (Variable*) getRoot(0);
	arg_val_26->val = arg->val;
	new_Variable();
	Variable* arg_expectedVal_27 = (Variable*) getRoot(0);
	arg_expectedVal_27->val = arg->expectedVal;
	
	{
		pushRoot(arg_message_25->val);
	}
	printstring();
	{
		new_String(": Expected [");
	}
	printstring();
	{
		pushRoot(arg_expectedVal_27->val);
	}
	printint();
	{
		new_String("] recieved [");
	}
	printstring();
	{
		pushRoot(arg_val_26->val);
	}
	printint();
	{
		new_String("]\n");
	}
	printstring();
	
	ret:
	popRoots(5);
}
void new_fun_69_13() {
	pushRoot(nullptr);
	new_Func(fun_69_13);
}
struct closure_fun_79_14 : Collectable {
};
void fun_79_14() {
	record_4* arg = (record_4*) getRoot(0);
	closure_fun_79_14* closure = (closure_fun_79_14*) getRoot(1);
	new_Variable();
	Variable* arg_message_28 = (Variable*) getRoot(0);
	arg_message_28->val = arg->message;
	new_Variable();
	Variable* arg_val_29 = (Variable*) getRoot(0);
	arg_val_29->val = arg->val;
	new_Variable();
	Variable* arg_expectedVal_30 = (Variable*) getRoot(0);
	arg_expectedVal_30->val = arg->expectedVal;
	
	{
		pushRoot(arg_message_28->val);
	}
	printstring();
	{
		new_String(": Expected [");
	}
	printstring();
	{
		pushRoot(arg_expectedVal_30->val);
	}
	printbool();
	{
		new_String("] recieved [");
	}
	printstring();
	{
		pushRoot(arg_val_29->val);
	}
	printbool();
	{
		new_String("]\n");
	}
	printstring();
	
	ret:
	popRoots(5);
}
void new_fun_79_14() {
	pushRoot(nullptr);
	new_Func(fun_79_14);
}

int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("add int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(1);
		}
		new_record_0();
		fun_4_0();
		new_Int(2);
	}
	new_record_3();
	fun_69_13();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("substract int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(5);
			new_Int(3);
		}
		new_record_0();
		fun_9_1();
		new_Int(2);
	}
	new_record_3();
	fun_69_13();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("greater than");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(0);
		}
		new_record_0();
		fun_24_4();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("greater than");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(1);
		}
		new_record_0();
		fun_24_4();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("less than");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(3);
			new_Int(5);
		}
		new_record_0();
		fun_29_5();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("less than");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(3);
			new_Int(1);
		}
		new_record_0();
		fun_29_5();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("greater than equal");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(0);
		}
		new_record_0();
		fun_14_2();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("greater than equal ");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(1);
		}
		new_record_0();
		fun_14_2();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("less than equal");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(3);
			new_Int(5);
		}
		new_record_0();
		fun_19_3();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("less than equal");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(3);
			new_Int(1);
		}
		new_record_0();
		fun_19_3();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("equal int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(1);
		}
		new_record_0();
		fun_34_6();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("equal int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(0);
			new_Int(1);
		}
		new_record_0();
		fun_34_6();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not equal int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(1);
			new_Int(1);
		}
		new_record_0();
		fun_44_8();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not equal int");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Int(0);
			new_Int(1);
		}
		new_record_0();
		fun_44_8();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	{
		new_String("\n");
	}
	printstring();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(true);
		}
		new_record_1();
		fun_39_7();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(false);
		}
		new_record_1();
		fun_39_7();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("and");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(true);
			new_Bool(false);
		}
		new_record_2();
		fun_49_9();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("and");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(true);
			new_Bool(true);
		}
		new_record_2();
		fun_49_9();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("or");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(true);
			new_Bool(false);
		}
		new_record_2();
		fun_54_10();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("equal bool");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(true);
			new_Bool(false);
		}
		new_record_2();
		fun_59_11();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("equal bool");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(false);
			new_Bool(false);
		}
		new_record_2();
		fun_59_11();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not equal bool");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(false);
			new_Bool(true);
		}
		new_record_2();
		fun_64_12();
		new_Bool(true);
	}
	new_record_4();
	fun_79_14();
	// closure for pattern
	pushRoot(nullptr);
	{
		new_String("not equal bool");
		// closure for pattern
		pushRoot(nullptr);
		{
			new_Bool(false);
			new_Bool(false);
		}
		new_record_2();
		fun_64_12();
		new_Bool(false);
	}
	new_record_4();
	fun_79_14();
	
	finalizeGarbageCollector();
	return 0;
}
