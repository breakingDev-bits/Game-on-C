#include <stdio.h>
#include <stdbool.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_error.h>

bool runningLoop = 1;

int main(void) {
    printf("%s", "Load a Program\n");
    if(!SDL_Init(SDL_INIT_VIDEO)) { // if init is !true SDL_GetError
        printf("Error with init window %s\n", SDL_GetError());
    }

    SDL_Window* window = SDL_CreateWindow("Hello world", 800, 600, SDL_WINDOW_MINIMIZED);
    
    if(window == NULL) {
        fprintf(stderr, "Error with create window: %s\n", SDL_GetError());
        SDL_Quit();
        return 1; 
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, 0);

    while(runningLoop) {
        break;
    }
    
    return 0;
}