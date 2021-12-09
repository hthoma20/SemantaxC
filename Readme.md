## SemantaxC

The Semantax compiler (SemantaxC) is currently broken into three repositories:
1. SemantaxC-Java,
2. Semantax-Runtime, and
3. SemantaxC (this package)

SemantaxC-Java is code for the bulk of the compiler. SemantaxC-Java processes a set of Semantax files
and outputs a C++ file.
SemantaxC-Runtime is code for the runtime of Semantax. It is written in C++ and contains runtime components
such as memory allocation, garbage collection, built-in types, and progcalls.
SemantaxC puts these pieces together to create a full compiler.