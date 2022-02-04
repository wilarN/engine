#pragma once

#ifdef LW_PLATFORM_WINDOWS

extern lddw::Application* lddw::CreateApplication();

int main(int argc, char** argv) 
{
	lddw::Log::Init();
	LW_CORE_WARN("Initialized log!");
	int a = 7;
	LW_ERROR("DOLBAEB ENGINE SUCC.", a);
	LW_CORE_INFO("Better than frostbite 100, (at least not worth leaking).");

	auto app = lddw::CreateApplication();
	app->Run();
	delete app;
}

#endif // LW_PLATFORM_WINDOWS

