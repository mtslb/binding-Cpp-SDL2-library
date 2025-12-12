#define CATCH_CONFIG_MAIN
#include "../lib/sdl/sdl_window.hpp"
#include "../lib/sdl/sdl_core.hpp"
#include <catch2/catch.hpp>

using namespace sdl;

TEST_CASE("Création de fenêtre : position et taille") {
    init();

    window w("Test", {100, 150}, {640, 480});

    auto pos = w.get_position();
    REQUIRE(pos[0] == 100);
    REQUIRE(pos[1] == 150);

    auto sz = w.get_size();
    REQUIRE(sz[0] == 640);
    REQUIRE(sz[1] == 480);

    quit();
}

TEST_CASE("Déplacement et redimensionnement") {
    init();

    sdl::window w("Test", {10, 20}, {300, 200});

    w.move({50, 60});
    auto pos = w.get_position();
    REQUIRE(pos[0] == 50);
    REQUIRE(pos[1] == 60);

    w.resize({800, 600});
    auto sz = w.get_size();
    REQUIRE(sz[0] == 800);
    REQUIRE(sz[1] == 600);

    quit();
}


TEST_CASE("Visibilité") {
    init();

    run();

    sdl::window w("Test", {0, 0}, {640, 480});

    w.show();

    w.hide();

    exit_run();

    quit();
}

