#include "runtime.h"

struct record_4;
struct record_0;
struct record_3;
struct record_2;
struct record_1;

struct record_4 : Collectable {
	record_2* myThing;
	record_3* stuff;
};
void new_record_4() {
	record_4* obj = (record_4*) gcalloc(sizeof(record_4), 2);
	obj->stuff = (record_3*) popRoot();
	obj->myThing = (record_2*) popRoot();
	pushRoot(obj);
}

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

struct record_3 : Collectable {
	Bool* b;
	String* c;
	Int* a;
};
void new_record_3() {
	record_3* obj = (record_3*) gcalloc(sizeof(record_3), 3);
	obj->a = (Int*) popRoot();
	obj->c = (String*) popRoot();
	obj->b = (Bool*) popRoot();
	pushRoot(obj);
}

struct record_2 : Collectable {
	Int* a;
	Bool* b;
	String* c;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 3);
	obj->c = (String*) popRoot();
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


Variable* var_x_0;
Variable* var_y_1;
void initializeGlobalVariables() {
	for (int i = 0; i < 2; i++) {
		new_Variable();
	}
	var_x_0 = (Variable*) getRoot(0);
	var_y_1 = (Variable*) getRoot(1);
}


int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
		pushRoot(var_x_0->val);
		pushRoot(var_y_1->val);
	}
	new_record_1();
	popRoot();
	{
		new_Int(5);
		new_Bool(false);
		new_String("foo");
	}
	new_record_2();
	popRoot();
	{
		{
			new_Int(10);
			new_Bool(true);
			new_String("bar");
		}
		new_record_2();
		{
			new_Bool(true);
			new_String("baz");
			new_Int(2);
		}
		new_record_3();
	}
	new_record_4();
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
