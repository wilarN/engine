#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace lddw {

	class LDDW_API Log
	{
	public:

		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log macros
#define LW_CORE_WARN(...)       ::lddw::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LW_CORE_ERROR(...)      ::lddw::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LW_CORE_TRACE(...)      ::lddw::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LW_CORE_INFO(...)       ::lddw::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LW_CORE_FATAL(...)      ::lddw::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Core Log macros
#define LW_WARN(...)            ::lddw::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LW_ERROR(...)           ::lddw::Log::GetClientLogger()->error(__VA_ARGS__)
#define LW_TRACE(...)           ::lddw::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LW_INFO(...)            ::lddw::Log::GetClientLogger()->info(__VA_ARGS__)
#define LW_FATAL(...)           ::lddw::Log::GetClientLogger()->fatal(__VA_ARGS__)