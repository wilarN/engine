#pragma once

#include "Core.h"

namespace lddw {

	class LDDW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};


	// To be defined in CLIENT.
	Application* CreateApplication();

}