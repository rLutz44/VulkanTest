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
		void setupDebugMessenger();
		void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
		bool isDeviceSuitable(VkPhysicalDevice device); // Fix: return type should be bool

		void pickPyhsicalDevice();

		VkInstance instance;
		VkDebugUtilsMessengerEXT debugMessenger;

		GLFWwindow* window;
};

