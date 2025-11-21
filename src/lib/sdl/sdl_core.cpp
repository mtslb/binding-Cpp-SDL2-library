#include "sdl_core.hpp"

namespace sdl {

    void core::init(Uint32 flag) {
        SDL_Init(flag);
    }

    void core::quit() {
        SDL_Quit();
    }

    void core::run() {
        SDL_Event e;
        while (running) {
            while (SDL_PollEvent(&e)) {
                if (e.type == SDL_QUIT) {
                    running = false;
                }
            }
        }
    }

    void core::exit_run() {
        running = false;
    }

} // namespace sdl
