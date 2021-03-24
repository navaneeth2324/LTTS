all.exe:sum.c test.c diffe.c mult.c max.c
	gcc sum.c test.c diffe.c mult.c max.c -o all.exe

run:
	all.exe

clean:
	rm *.exe