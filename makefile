all: pic.c
	gcc pic.c
	./a.out

clean:
	rm *.ppm
	rm ./a.out
