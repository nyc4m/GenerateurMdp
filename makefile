all : liste.o generateur.o
	gcc -o Gen generateur.o liste.o
liste.o : liste.c
	gcc -c liste.c
generateur.o: generateur.c
	gcc -c generateur.c
clean:
	rm -rf *.o Gen
	
