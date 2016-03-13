manage_err: manage_err.o t.o t.h
		gcc -Wall -ansi -pedantic manage_err.o t.o -o manage_err

manage_err.o: manage_err.c t.h
		gcc -c -Wall -ansi -pedantic manage_err.c -o manage_err.o

t.o: t.c t.h
		gcc -c -Wall -ansi -pedantic t.c -o t.o

clean:
		echo "Cleaning started..."
		rm -f manage_err.o t.o
		echo "Cleaning end."
		
remove_program:
		rm -f manage_err

.PHONY: clean
.PHONY: remove_program