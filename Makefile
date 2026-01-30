flags=-O2 -Wall 

.PHONY: all clean

all: clean ping

ping: ping.o
	cc $(flags) $^ -o $@

ping.o: ping.c ping.h
	cc $(flags) -c $<

clean:
	rm -f *.o ping

