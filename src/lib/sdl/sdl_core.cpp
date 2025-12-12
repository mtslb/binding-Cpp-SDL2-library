#include "sdl_core.hpp"

namespace sdl {
    bool core::running = true;

    void core::init() {
        printf("core init called\n");
        SDL_Init(SDL_INIT_VIDEO );
    }

    void core::quit() {
        SDL_Quit();
    }

    void core::run() {
        SDL_Event e;
        while (running) {
            while (SDL_PollEvent(&e)) {
                if (e.type == SDL_QUIT) {
                    exit_run();
                }
            }
        }
    }

    void core::exit_run() {
        running = false;
    }

} // namespace sdl
