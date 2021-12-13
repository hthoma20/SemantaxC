#include "runtime.h"


int main(int argc, char* argv[]) {
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
