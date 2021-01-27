
CC = g++
CFLAGS = -lSDL2 -lfreeimage
DEPS = libraries.h camera.h materials.h rays.h intersections.h light_source.h primitive_objects.h scene.h process.h
OBJ = libraries.o camera.o materials.o rays.o intersections.o light_source.o primitive_objects.o scene.o process.o main.o

%.o : %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

../bin/lanceur : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)


clean :
	rm -f *.o
