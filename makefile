stack_test: stack_test.o stack.o
	gcc stack.o stack_test.o -o stack
stack_test.o: stack_test.c
	gcc -c stack_test.c
stack.o: stack.c
	gcc -c stack.c
clean:
	rm stack.o stack_test.o stack
