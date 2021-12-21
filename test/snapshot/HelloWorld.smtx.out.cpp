#include "runtime.h"



void initializeGlobalVariables() {
	for (int i = 0; i < 0; i++) {
		new_Variable();
	}
}


int main(int argc, char* argv[]) {
	initializeGlobalVariables();
	
	{
		new_String("Hello, World!\n");
	}
	printstring();
	{
		new_String("I am ");
	}
	printstring();
	{
		new_Int(23);
	}
	printint();
	{
		new_String(" years old.\n");
	}
	printstring();
	
	finalizeGarbageCollector();
	return 0;
}
