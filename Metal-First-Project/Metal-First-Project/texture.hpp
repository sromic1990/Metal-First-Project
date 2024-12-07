//
//  Untitled.h
//  Metal-First-Project
//
//  Created by Sourav Chatterjee on 7.12.2024.
//

#pragma once
#include <Metal/Metal.hpp>
#include "external/stb/stb_image.h"
class Texture
{
public:
    Texture(const char* filepath, MTL::Device* metalDevice);
    ~Texture();
    MTL::Texture* texture;
    int width, height, channels;
    
private:
    MTL::Device* device;
};
