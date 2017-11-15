IDIR =./Interna
CC=gcc
CFLAGS=-g -I$(IDIR)

ODIR=Obj
LDIR =../lib

LIBS=-lm

_DEPS = vector.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main2.o addvec.o multvec.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tallerLinking: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
