CC = clang
MAIN_FILE = main.c
OUTPUTFILE = binary/main

CCCommand = $(MAIN_FILE) -o $(OUTPUTFILE)

build:
	$(CC) $(CCCommand)