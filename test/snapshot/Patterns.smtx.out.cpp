#include "runtime.h"

struct record_0;

struct record_0 : Collectable {
	Int* a;
	Int* b;
};
record_0* new_record_0(Int* a, Int* b) {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 2);
	obj->a = a;
	obj->b = b;
	return obj;
}

Int* pattern_ab_0(record_0* arg) {
}

int main(int argc, char* argv[]) {
	printint(pattern_ab_0(new_record_0(new_Int(5), new_Int(4))));
	finalizeGarbageCollector();
	return 0;
}
