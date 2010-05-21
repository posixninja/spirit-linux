all: dl
%.o: %.c thread.h afc.h
	gcc -std=gnu99 -m32 -c -o $@ $<

dl: spirit.o afc.o
	gcc -m32 -g -o spirit spirit.o afc.o -limobiledevice -lplist -lcrypto

clean:
	rm -rf spirit *.o *.dSYM
