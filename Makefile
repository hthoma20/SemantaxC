
runtime_dir = ~/workplace/SemantaxRuntime
# headers that need to be included when a semantax program is compiled
runtime_headers = allocator.h types.h progcalls.h runtime.h
runtime_objects = allocator.o types.o progcalls.o

compiler_dir = /mnt/c/Users/harry/Semantax/SemantaxC-Java
compiler_jar = $(compiler_dir)/target/semantaxc-0.1-SNAPSHOT-jar-with-dependencies.jar

.DUMMY: install
install: directories $(compiler_jar)
	cp $(addprefix $(runtime_dir)/src/, $(runtime_headers)) ./headers
	cp $(addprefix $(runtime_dir)/, $(runtime_objects)) ./objects
	cp $(compiler_jar) ./jars/semantaxc.jar

directories:
	mkdir -p headers
	mkdir -p objects
	mkdir -p jars

$(compiler_jar): $(compiler_dir)
	cd $(compiler_dir); \
		mvn clean compile assembly:single
