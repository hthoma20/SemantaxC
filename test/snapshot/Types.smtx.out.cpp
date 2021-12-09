#include "runtime.h"

struct record_0;
struct record_1;

struct record_0 : Collectable {
	Int* a;
	Bool* b;
};
record_0* new_record_0(Int* a, Bool* b) {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 2);
	obj->a = a;
	obj->b = b;
	return obj;
}

struct record_1 : Collectable {
	record_0* x;
	record_0* y;
};
record_1* new_record_1(record_0* x, record_0* y) {
	record_1* obj = (record_1*) gcalloc(sizeof(record_1), 2);
	obj->x = x;
	obj->y = y;
	return obj;
}

int main(int argc, char* argv[]) {
	new_record_1(nullptr, nullptr);
	finalizeGarbageCollector();
	return 0;
}
