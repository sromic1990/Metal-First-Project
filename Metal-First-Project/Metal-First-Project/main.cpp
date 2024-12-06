//
//  main.cpp
//  Metal-First-Project
//
//  Created by Sourav Chatterjee on 6.12.2024.
//
#include <Metal/Metal.hpp>

#include <iostream>

int main(int argc, const char * argv[]) {
    
    MTL::Device* device = MTL::CreateSystemDefaultDevice();
    
    std::cout << "Hello, World! from Metal-CPP!\n";
    return 0;
}
