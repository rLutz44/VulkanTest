#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <optional>
#include "global.h"
#include <iostream>

struct QueueFamilyIndices {
	std::optional<uint32_t> graphicsFamily;

	bool isComplete() {
		return graphicsFamily.has_value();
	}

};

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
		bool isDeviceSuitable(VkPhysicalDevice device); 
		QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

		void pickPyhsicalDevice();

		VkInstance instance;
		VkDebugUtilsMessengerEXT debugMessenger;

		GLFWwindow* window;
};

