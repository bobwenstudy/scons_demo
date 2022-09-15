all: main.o test.o
	gcc main.o test.o -o main
main.o: main.c
	gcc main.c -c -o main.o
test.o: test.c
	gcc test.c -c -o test.o
clean:
	rm main.o test.o main.exe