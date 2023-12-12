#include "RendererAPI.hpp"
#include <memory>

namespace Bridge{
    class Shape {
    protected:
        std::unique_ptr<RendererAPI> rendererAPI;

    public:
        Shape(std::unique_ptr<RendererAPI>&& rendererAPI) : rendererAPI(std::move(rendererAPI)) {}
        virtual void draw() = 0;
        virtual ~Shape() {}
    };
}