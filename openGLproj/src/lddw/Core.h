#pragma once

#ifdef LW_PLATFORM_WINDOWS
	#ifdef LW_BUILD_DLL
		#define LDDW_API __declspec(dllexport)
	#else
		#define LDDW_API __declspec(dllimport)
	#endif
#else
	#error Hazel only support Windows!
#endif