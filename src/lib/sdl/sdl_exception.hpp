#ifndef SDL_EXCEPTION_HPP
#define SDL_EXCEPTION_HPP

#include <stdexcept>
#include <string>
#include <SDL2/SDL.h>

namespace sdl {

    class error : public std::runtime_error {
    public:
        error()
            : std::runtime_error(SDL_GetError())
        {}

        explicit error(const std::string& msg)
            : std::runtime_error(msg + ": " + SDL_GetError())
        {}
    };

} 

#endif 
