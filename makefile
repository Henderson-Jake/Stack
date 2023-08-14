a.out:main.o stack.o
	gcc -o a.exe main.o stack.o

main.o:main.c stack.h
	gcc -c -o main.o main.c


stack.o:stack.c stack.h
	gcc -c -o stack.o stack.c

clean:
	rm *.o *.exe
