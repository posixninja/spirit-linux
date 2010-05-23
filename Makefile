all: spirit
%.o: %.c afc.h
	gcc -std=gnu99 -c -o $@ $<

spirit: spirit.o afc.o
	gcc -o spirit spirit.o afc.o -limobiledevice -lplist -lcrypto

clean:
	rm -rf spirit *.o *.dSYM
