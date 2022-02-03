#pragma once

#ifdef LW_PLATFORM_WINDOWS

extern lddw::Application* lddw::CreateApplication();

int main(int argc, char** argv) 
{
	lddw::Log::Init();
	LW_CORE_WARN("Initialized log!");
	int a = 7;
	LW_INFO("Hello!! Var={0}", a);

	auto app = lddw::CreateApplication();
	app->Run();
	delete app;
}

#endif // LW_PLATFORM_WINDOWS
