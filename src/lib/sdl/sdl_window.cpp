#include "sdl_window.hpp"

namespace sdl {

    window::window(const std::string& title, const position& pos, const size& sz) {
        sdl_window = SDL_CreateWindow(title.c_str(), pos[0], pos[1], sz[0], sz[1 ], SDL_WINDOW_HIDDEN);
        printf("window constructor called\n");
    }

    void window::show() {
        SDL_ShowWindow(sdl_window);
        printf("window show called\n");
    }

    void window::hide() {
        SDL_HideWindow(sdl_window);
    }

    SDL_Renderer* window::get_renderer() const {
        return SDL_GetRenderer(sdl_window);
    }

    size window::get_size() const {
        int w, h;
        SDL_GetWindowSize(sdl_window, &w, &h);
        return size{w, h};
    }

    position window::get_position() const {
        int x, y;
        SDL_GetWindowPosition(sdl_window, &x, &y);
        return position{x, y};
    }

    void window::move(const position& new_pos) {
        SDL_SetWindowPosition(sdl_window, new_pos[0], new_pos[1]);
    }

    void window::resize(const size& new_size) {
        SDL_SetWindowSize(sdl_window, new_size[0], new_size[1]);
    }

    void window::present() const {
        SDL_RenderPresent(SDL_GetRenderer(sdl_window));
    }

} // namespace sdl