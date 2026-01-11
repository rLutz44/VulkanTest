#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include "global.h"
#include <iostream>

class HelloTriangleApplication
{
	public:
		void run();

	private:
		void initWindow();
		void initVulkan();
		void mainLoop();
		void cleanup();
		void createInstance();
		
		VkInstance instance;

		GLFWwindow* window;
};

