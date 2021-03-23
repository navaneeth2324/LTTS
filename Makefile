all.exe:sum.c test.c diffe.c mult.c
	gcc sum.c test.c diffe.c mult.c -o all.exe

run:
	all.exe

clean:
	rm *.exe