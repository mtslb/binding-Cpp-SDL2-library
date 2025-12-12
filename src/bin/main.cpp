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

   
    position pos1 = w1.get_position();
    if (pos1[0] != 100 || pos1[1] != 150) {
        std::cout << "Erreur : position incorrecte\n";
        
    }

    size sz1 = w1.get_size();
    if (sz1[0] != 640 || sz1[1] != 480) {
        std::cout << "Erreur : taille incorrecte\n";
        
    }

    w1.show();
    core::run();
    // // ------------------------------------
    // // Test 2 : Déplacement et redimensionnement
    // // ------------------------------------
    core::init();

    w1.move({0, 0});
     
    position pos2 = w1.get_position();
   

    w1.resize({1000, 4000});
    size sz2 = w1.get_size();
    if (sz2[0] != 1000 || sz2[1] != 4000) {
        std::cout << "Erreur : redimensionnement incorrect\n";
    }
    if (pos2[0] != 0 || pos2[1] != 0) {
        std::cout << "Erreur : déplacement incorrect\n";
        
    }
    w1.show();
    core::run();

    return 0;
}
