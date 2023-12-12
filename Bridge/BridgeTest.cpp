#include "BridgeTest.hpp"

void testBridge() {
    std::unique_ptr<Bridge::RendererAPI> openGL = std::make_unique<Bridge::OpenGLRenderer>();
    std::unique_ptr<Bridge::RendererAPI> vulkan = std::make_unique<Bridge::VulkanRenderer>();

    std::unique_ptr<Bridge::Shape> circle1 = std::make_unique<Bridge::Circle>(1, 2, 3, std::move(openGL));
    std::unique_ptr<Bridge::Shape> circle2 = std::make_unique<Bridge::Circle>(5, 7, 11, std::move(vulkan));

    circle1->draw();
    circle2->draw();

}