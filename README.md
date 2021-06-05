# Plataformas

CC = gcc

CFLAGS = -Wall

FILE1 = ejercicio1.c

FILE2 = ejercicio2.c

FILE3 = ejercicio3.c

TARGET1 = ejercicio_1

TARGET2 = ejercicio_2

TARGET3 = ejercicio_3


copilacion1: $(TARGET1)

$(TARGET1): $(FILE1)
        $(CC) $(CFLAGS) -o $(TARGET1) $(FILE1)


copilacion2: $(TARGET2)

$(TARGET2): $(FILE2)
        $(CC) $(CFLAGS) -o $(TARGET2) $(FILE2)


copilacion3: $(TARGET3)

$(TARGET3): $(FILE3)
        $(CC) $(CFLAGS) -o $(TARGET3) $(FILE3)

