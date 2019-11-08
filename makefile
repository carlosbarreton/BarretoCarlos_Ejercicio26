all: run

run: programa1.x programa1.cpp
	./programa1.x

programa1.x: programa1.cpp
	g++ programa1.cpp -o programa1.x

clean:
	rm programa1.x

.PHONY: all run
