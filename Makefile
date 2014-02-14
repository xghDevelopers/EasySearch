INCLUDES=src/*.cpp src/*.hpp 
all:
	g++ $(INCLUDES) `pkg-config --cflags gtk+-2.0` -g -o EasySearch `pkg-config --libs gtk+-2.0`
clean:
	rm -rf *.o