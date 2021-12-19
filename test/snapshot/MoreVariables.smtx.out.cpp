#include "runtime.h"

struct record_0;

struct record_0 : Collectable {
	Int* x;
};
void new_record_0() {
	record_0* obj = (record_0*) gcalloc(sizeof(record_0), 1);
	obj->x = (Int*) popRoot();
	pushRoot(obj);
}


Variable* var_x_0;

void pattern_addsixto_0() {
	record_0* arg = (record_0*) getRoot(0);
	
	{
		new_Int(6);
		pushRoot(arg->x);
	}
	addint();
	
	ret:
	Collectable* ret_val = popRoot();
	popRoots(1);
	pushRoot(ret_val);
}


int main(int argc, char* argv[]) {
	new_Variable();
	var_x_0 = (Variable*) popRoot();
	pushRoot(var_x_0);
	
	new_Int(10);
	var_x_0->val = popRoot();
	{
		{
			pushRoot(var_x_0->val);
		}
		new_record_0();
		pattern_addsixto_0();
	}
	printint();
	{
		new_String("\n");
	}
	printstring();
	
	finalizeGarbageCollector();
	return 0;
}
