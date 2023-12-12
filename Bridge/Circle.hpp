#include "Shape.hpp"

namespace Bridge {
    class Circle : public Shape {
    public:
        Circle(int x, int y, int radius, std::unique_ptr<RendererAPI>&& rendererAPI)
            : Shape(std::move(rendererAPI)), x(x), y(y), radius(radius) {}

        void draw() override;
    private:
        int x, y, radius;
    };
}    