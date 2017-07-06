CC=gcc
LINKER=gcc
TARGET=main
C_OPTION=-c
L_OPTION=-o $(TARGET)
C_SOURCES=ls *.c
RM=rm -rf
all:sources build exec clean

sources:
	@echo 'List of files to compile...'
	@$(C_SOURCES)
	@echo ' '
build:
	@echo 'Compiling...'
	$(CC) $(C_OPTION) *.c
	@echo 'building the binary...'
	$(LINKER) $(L_OPTION) *.o
	@echo ' '
exec:
	@echo 'running test...'
	@./$(TARGET)
	@echo ' '
clean:
	@echo 'Cleaning the directory...'
	$(RM) $(TARGET).o $(TARGET)
	@echo ' '
