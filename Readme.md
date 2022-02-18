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

## Building and running SemantaxC

There is currently no distribution of SemantaxC. It must be built from source to run.

### Prerequisites
- Git - https://git-scm.com/download
- Maven - https://maven.apache.org/download.cgi
- Make - https://www.gnu.org/software/make/
- GCC - https://gcc.gnu.org/install/download.html

### Installation

1. Create a directory for the project, for example
```
mkdir ~/Semantax
```

2. Build the compiler jar
```
cd ~/Semantax
git clone https://github.com/hthoma20/SemantaxC-Java
cd SemantaxC-Java
mvn compile assembly-single
```

3. Build the runtime
```
cd ~/Semantax
git clone https://github.com/hthoma20/SemantaxC-Runtime
cd SemantaxC-Runtime
make runtime
```

4. Download the script repository (this repo)
```
cd ~/Semantax
git clone https://github.com/hthoma20/SemantaxC
cd SemantaxC
```

5. Update the [runtime-dir] and [compiler-dir] in the Makefile

6. Complete final installation
```
cd ~/Semantax/SemantaxC
make install
```

[runtime-dir]: https://github.com/hthoma20/SemantaxC/blob/main/Makefile#L2
[compiler-dir]: https://github.com/hthoma20/SemantaxC/blob/main/Makefile#L7
