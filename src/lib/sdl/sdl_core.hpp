#ifndef SDL_CORE_HPP
#define SDL_CORE_HPP

#include <SDL2/SDL.h>

namespace sdl {

    class core {
    public:
        void init(Uint32 flag);
        void quit();
        void run();
        void exit_run();

    private:
        bool running = true;
    };

} 

#endif 
