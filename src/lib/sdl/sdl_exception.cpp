#include "sdl_exception.hpp"

namespace sdl {

    error::error()
        : std::runtime_error(SDL_GetError())
    {}

    const char* error::what() const throw() {
        return msg.c_str();
    }

} // namespace sdl
