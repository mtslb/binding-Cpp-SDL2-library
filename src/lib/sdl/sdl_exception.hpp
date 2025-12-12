#ifndef SDL_EXCEPTION_HPP
#define SDL_EXCEPTION_HPP

#include <stdexcept>
#include <string>
#include <SDL2/SDL.h>

namespace sdl {

    class error : public std::runtime_error {
        private:
        std::string msg;
        public:
        error();
        virtual const char* what() const throw();
    };

} // namespace sdl

#endif // SDL_EXCEPTION_HPP
