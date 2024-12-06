//
//  main.cpp
//  Metal-First-Project
//
//  Created by Sourav Chatterjee on 6.12.2024.
//
#include <Metal/Metal.hpp>
#include "mtl_engine.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    
    MTLEngine engine;
    engine.init();
    engine.run();
    engine.cleanup();
    
    std::cout << "Hello, World! from Metal-CPP!\n";
    return 0;
}
