## MAKEFILE
###########

CC=g++
CFLAGS=`sdl2-config --cflags` -DLINUX
LDFLAGS=`sdl2-config --libs`
PROG=gbce

.PHONY: all clean

OBJS=	OBJ/GBCE.o	\
	OBJ/Cpu.o	\
	OBJ/Ecran.o

## =================================================================
all: $(PROG)

## =================================================================
$(PROG): $(OBJS)
	@echo "Making $(PROG)"
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(PROG)




## =================================================================
clean:
	@echo "Cleaning ..."
	rm -f OBJ/*.o

## =================================================================
OBJ/GBCE.o: GBCE.cpp
	@echo "Making $@ from $<"
	$(CC) $(CFLAGS) -c $< -o $@

OBJ/Cpu.o: Cpu.cpp Cpu.h
	$(CC) $(CFLAGS) -c $< -o $@

OBJ/Ecran.o: Ecran.cpp Ecran.h
	$(CC) $(CFLAGS) -c $< -o $@
