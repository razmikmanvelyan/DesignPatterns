#pragma once

#include <iostream>
#include "RendererAPI.hpp"

namespace Bridge {
    class OpenGLRenderer : public RendererAPI {
    public:
        void renderCircle(int, int , int) override;
    };
}