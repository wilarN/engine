#include "Application.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <chrono>

using namespace std::chrono;

namespace lddw {

	Application::Application()
	{
	}

	Application::~Application() 
	{
	}

	void Application::Run() {
		while (!GetAsyncKeyState(VK_RETURN)) {
			std::cout << "Test Msg." << std::endl;
			Sleep(1000);
		}
	}
}

