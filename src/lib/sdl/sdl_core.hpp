#ifndef SDL_CORE_HPP
#define SDL_CORE_HPP

#include <SDL2/SDL.h>

namespace sdl {

    class core {
    public:
        static void init();
        static void quit();
        static void run();
        static void exit_run();

    private:
        static bool running;
    };

} 

#endif 
