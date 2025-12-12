#include "sdl_window.hpp"
#include "sdl_core.hpp"
#include <iostream>

using namespace sdl;

int main() {
    // -----------------------------
    // Test 1 : Création de fenêtre
    // -----------------------------
    core::init();
    
    window w1("Test", {100, 150}, {640, 480});

   
    auto pos1 = w1.get_position();
    if (pos1[0] != 100 || pos1[1] != 150) {
        std::cout << "Erreur : position incorrecte\n";
        
    }

    auto sz1 = w1.get_size();
    if (sz1[0] != 640 || sz1[1] != 480) {
        std::cout << "Erreur : taille incorrecte\n";
        
    }

    w1.show();
    core::run();
    core::init();


    // // ------------------------------------
    // // Test 2 : Déplacement et redimensionnement
    // // ------------------------------------
    w1.move({1000, 0});
    auto pos2 = w1.get_position();
    if (pos2[0] != 1000 || pos2[1] != 0) {
        std::cout << "Erreur : déplacement incorrect\n";
        
    }

    w1.resize({1000, 5000});
    auto sz2 = w1.get_size();
    if (sz2[0] != 1000 || sz2[1] != 5000) {
        std::cout << "Erreur : redimensionnement incorrect\n";
    }
    
    w1.show();
    core::run();

    return 0;
}
