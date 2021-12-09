#include "runtime.h"

struct record_2;
struct record_1;
struct record_0;

struct record_2 : Collectable {
	record_0* myThing;
	record_1* stuff;
};
record_2* new_record_2(record_0* myThing, record_1* stuff) {
	record_2* obj = (record_2*) gcalloc(sizeof(record_2), 2);
	obj->myThing = myThing;
	obj->stuff = stuff;
	return obj;
}

struct record_1 : Collectable {
	Bool* b;
	String* c;
	Int* a;
};
record_1* new_record_1(Bool* b, String* c, Int* a) {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 3);
	obj->b = b;
	obj->c = c;
	obj->a = a;
	return obj;
}

struct record_0 : Collectable {
	Int* a;
	Bool* b;
	String* c;
};
record_0* new_record_0(Int* a, Bool* b, String* c) {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 3);
	obj->a = a;
	obj->b = b;
	obj->c = c;
	return obj;
}

int main(int argc, char* argv[]) {
	new_record_0(new_Int(5), new_Bool(false), new_String("foo"));
	new_record_2(new_record_0(new_Int(10), new_Bool(true), new_String("bar")), new_record_1(new_Bool(true), new_String("baz"), new_Int(2)));
	finalizeGarbageCollector();
	return 0;
}
