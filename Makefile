prog1:bin/hw1main.o lib/libinout.a
	g++ -o prog1 bin/hw1main.o lib/libinout.a

lib/libinout.a: fin.o fout.o
	ar rvs lib/libinout.a bin/fin.o bin/fout.o

bin/hw1main.o: src/hw1main.cc include/functions.h
	g++ -c -I include src/hw1main.cc
	mv hw1main.o bin/

fout.o: src/fout.cc include/functions.h
	g++ -c -I include src/fout.cc
	mv fout.o bin/

fin.o: src/fin.cc include/functions.h
	g++ -c -I include src/fin.cc
	mv fin.o bin/

clear: 
	rm *.o
