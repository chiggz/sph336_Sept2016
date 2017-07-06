CC=gcc
LINKER=gcc
TARGET=kiff
C_OPTIONS=-c
L_OPTIONS=-o $(TARGET)
RM=rm -rf
C_SOURCES=ls *.c 
all: C_files build exec clean
C_files:
	$(C_SOURCES)
build:
	$(CC) $(C_OPTIONS) *.c
	$(LINKER) $(L_OPTIONS) *.o
exec:
	./$(TARGET)
clean:
	$(RM) $(TARGET).o $(TARGET)
