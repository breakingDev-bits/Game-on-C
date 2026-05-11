CC = clang
MAIN_FILE = main.c
OUTPUTFILE = binary/main

CCCommand = $(MAIN_FILE) -o $(OUTPUTFILE) `pkg-config --cflags --libs sdl3`

build:
	$(CC) $(CCCommand)