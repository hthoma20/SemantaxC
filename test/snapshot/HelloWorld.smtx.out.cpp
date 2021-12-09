#include "runtime.h"


int main(int argc, char* argv[]) {
	printstring(new_String("Hello, World!\n"));
	printstring(new_String("I am "));
	printint(new_Int(23));
	printstring(new_String(" years old.\n"));
	finalizeGarbageCollector();
	return 0;
}
