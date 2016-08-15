CC = g++

all:
	$(CC) aula-pratica1.cpp -lglut -lGL -lGLU -lm -o main

clean:
	rm main
