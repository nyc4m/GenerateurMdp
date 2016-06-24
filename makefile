all : liste.o generateur.o
	gcc -o Gen generateur.o liste.o
debug : liste.c generateur.c
	gcc -g liste.c generateur.c -o GenDebug
cDebug :
	rm -rf GenDebug
liste.o : liste.c
	gcc -c liste.c
generateur.o: generateur.c
	gcc -c generateur.c
clean:
	rm -rf *.o 
sclean:
	rm -rf *.o Gen	

