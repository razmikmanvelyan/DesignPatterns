#pragma once

namespace Bridge{
    class RendererAPI {
    public:
        virtual void renderCircle(int x, int y, int radius) = 0;
        virtual ~RendererAPI() {}
    };
}