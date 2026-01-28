
#include <iostream>
#include <stdexcept>
#include "HelloTriangleApplication.h"



int main() {
	std::cout << "Vulkan Hello Triangle\n" << std::endl;
    HelloTriangleApplication app;

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}