all: compile run

compile:
	g++ main.cpp -o main -L/usr/local/lib -lcurl
run:
	./main

