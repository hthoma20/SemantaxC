#include "runtime.h"

struct record_0;
struct record_1;

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

void pattern_printn_0() {
	record_0* arg = (record_0*) getRoot(0);
	
	{
		pushRoot(arg->n);
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	ret:
	popRoots(1);
}

void pattern_ab_1() {
	record_1* arg = (record_1*) getRoot(0);
	
	{
		pushRoot(arg->a);
		pushRoot(arg->b);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(1);
	pushRoot(ret_val);
}

void pattern_printnpl_2() {
	record_0* arg = (record_0*) getRoot(0);
	new_Variable();
	Variable* var_x_0 = (Variable*) getRoot(0);
	new_Variable();
	Variable* var_y_1 = (Variable*) getRoot(0);
	new_Variable();
	Variable* var_sum_2 = (Variable*) getRoot(0);
	
	new_Int(1);
	var_x_0->val = popRoot();
	new_Int(2);
	var_y_1->val = popRoot();
	{
		pushRoot(var_x_0->val);
		pushRoot(var_y_1->val);
	}
	new_record_1();
	pattern_ab_1();
	var_sum_2->val = popRoot();
	{
		{
			pushRoot(var_sum_2->val);
			pushRoot(arg->n);
		}
		new_record_1();
		pattern_ab_1();
	}
	new_record_0();
	pattern_printn_0();
	
	ret:
	popRoots(4);
}

int main(int argc, char* argv[]) {
	{
		new_Int(5);
	}
	new_record_0();
	pattern_printnpl_2();
	{
		new_Int(10);
	}
	new_record_0();
	pattern_printnpl_2();
	finalizeGarbageCollector();
	return 0;
}
