#include "runtime.h"



void initializeGlobalVariables() {
	for (int i = 0; i < 0; i++) {
		new_Variable();
	}
}


int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
		new_Int(1);
		new_Int(2);
	}
	new_Array(2);
	popRoot();
	{
	}
	new_Array(0);
	popRoot();
	{
		new_String("hello");
		new_String("world");
	}
	new_Array(2);
	popRoot();
	{
		new_Bool(false);
	}
	new_Array(1);
	popRoot();
	
	finalizeGarbageCollector();
	return 0;
}
