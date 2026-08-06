CC = g++
CFLAGS = -Wall -std=c++17

TARGET = snake

SRCS = main.cpp header/serpente.cpp header/detectarTecla.cpp header/isca.cpp jogar.cpp

$(TARGET): $(SRCS)
	$(CC) -g  $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
