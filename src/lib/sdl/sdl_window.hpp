#ifndef SDL_WINDOW_HPP
#define SDL_WINDOW_HPP

#include <SDL2/SDL.h>
#include <string>
#include "sdl_forward.hpp"

namespace sdl {

    class window {
    public:
        window(const std::string& title, const position& pos, const size& sz);
        void show();
        void hide();  
        SDL_Renderer* get_renderer() const;  
        size get_size() const;
        position get_position() const;
        void move(const position& new_pos);
        void resize(const size& new_size);
        void present() const;
    private:
        SDL_Window* sdl_window;
    };

} // namespace sdl

#endif