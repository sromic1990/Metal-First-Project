//
//  vertexData.hpp
//  Metal-First-Project
//
//  Created by Sourav Chatterjee on 7.12.2024.
//

#pragma once
#include <simd/simd.h>

using namespace simd;

struct VertexData {
    float4 position;
    float2 textureCoordinate;
};
