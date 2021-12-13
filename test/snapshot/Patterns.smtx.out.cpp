#include "runtime.h"

struct record_0;

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

void pattern_ab_0() {
	record_0* arg = (record_0*) popRoot();
	{
		pushRoot(nullptr);
		pushRoot(nullptr);
	}
	addint();
}

int main(int argc, char* argv[]) {
	{
		{
			new_Int(5);
			new_Int(4);
		}
		new_record_0();
		pattern_ab_0();
	}
	printint();
	finalizeGarbageCollector();
	return 0;
}
