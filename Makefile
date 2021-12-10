
runtime_dir = ~/workplace/SemantaxRuntime
# headers that need to be included when a semantax program is compiled
runtime_headers = allocator.h types.h progcalls.h runtime.h
runtime_objects = allocator.o types.o progcalls.o

compiler_dir = /mnt/c/Users/harry/Semantax/SemantaxC-Java
compiler_jar = $(compiler_dir)/target/semantaxc-0.1-SNAPSHOT-jar-with-dependencies.jar

.PHONY: install
install: directories
	cp $(addprefix $(runtime_dir)/src/, $(runtime_headers)) ./headers
	cp $(addprefix $(runtime_dir)/, $(runtime_objects)) ./objects
	cp $(compiler_jar) ./jars/semantaxc.jar

directories:
	mkdir -p headers
	mkdir -p objects
	mkdir -p jars


.PHONY: runtests
runtests:
	./tests.sh

.PHONY: clean
clean:
	rm -f a.out out.cpp out.txt program.o

.PHONY: uninstall
uninstall:
	rm -rf headers jars objects