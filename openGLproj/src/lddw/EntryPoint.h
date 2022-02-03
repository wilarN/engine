#pragma once

#ifdef LW_PLATFORM_WINDOWS

extern lddw::Application* lddw::CreateApplication();

int main(int argc, char** argv) {

	auto app = lddw::CreateApplication();
	app->Run();
	delete app;
}

#endif // LW_PLATFORM_WINDOWS
