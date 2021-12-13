#include "runtime.h"

struct record_2;
struct record_1;
struct record_0;

struct record_2 : Collectable {
	record_0* myThing;
	record_1* stuff;
};
void new_record_2() {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 2);
	obj->stuff = (record_1*) popRoot();
	obj->myThing = (record_0*) popRoot();
	pushRoot(obj);
}

struct record_1 : Collectable {
	Bool* b;
	String* c;
	Int* a;
};
void new_record_1() {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 3);
	obj->a = (Int*) popRoot();
	obj->c = (String*) popRoot();
	obj->b = (Bool*) popRoot();
	pushRoot(obj);
}

struct record_0 : Collectable {
	Int* a;
	Bool* b;
	String* c;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 3);
	obj->c = (String*) popRoot();
	obj->b = (Bool*) popRoot();
	obj->a = (Int*) popRoot();
	pushRoot(obj);
}

int main(int argc, char* argv[]) {
	{
		new_Int(5);
		new_Bool(false);
		new_String("foo");
	}
	new_record_0();
	popRoot();
	{
		{
			new_Int(10);
			new_Bool(true);
			new_String("bar");
		}
		new_record_0();
		{
			new_Bool(true);
			new_String("baz");
			new_Int(2);
		}
		new_record_1();
	}
	new_record_2();
	popRoot();
	finalizeGarbageCollector();
	return 0;
}
