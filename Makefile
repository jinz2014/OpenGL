CC = gcc
CFLAGS = -g -Wall -m64

ifeq ($(shell uname), Darwin)
  LIBS = -framework OpenGL -framework GLUT
else
  LIBS = -lGL -lGLU -lglut
endif

Solar: Solar.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL05_cube: GL05_cube.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL04_bouncing_ball: GL04_bouncing_ball.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL03_animate_timer: GL03_animate_timer.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL03_animate: GL03_animate.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL02_reshape: GL02_reshape.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)


GL02: GL02.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

GL01: GL01.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

.o:.c
	$(CC) $(CFLAGS) -c $<

clean: FORCE
	-rm -f *.o *~ sample *core*

FORCE:
