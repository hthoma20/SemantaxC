#include "runtime.h"

struct record_0;
struct record_1;

struct record_0 : Collectable {
	Int* a;
	Bool* b;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 2);
	obj->b = (Bool*) popRoot();
	obj->a = (Int*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	record_0* x;
	record_0* y;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 2);
	obj->y = (record_0*) popRoot();
	obj->x = (record_0*) popRoot();
	pushRoot(obj);
}


Variable* var_y_0;
Variable* var_x_1;


int main(int argc, char* argv[]) {
	new_Variable();
	var_y_0 = (Variable*) popRoot();
	pushRoot(var_y_0);
	new_Variable();
	var_x_1 = (Variable*) popRoot();
	pushRoot(var_x_1);
	
	{
		pushRoot(var_x_1->val);
		pushRoot(var_y_0->val);
	}
	new_record_1();
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
