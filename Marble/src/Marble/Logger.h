#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace Marble
{
	class Logger
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

#define MARBLE_CORE_TRACE(...) Marble::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define MARBLE_CORE_INFO(...) Marble::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define MARBLE_CORE_WARN(...) Marble::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define MARBLE_CORE_ERROR(...) Marble::Logger::GetCoreLogger()->error(__VA_ARGS__)

#define MARBLE_CLIENT_TRACE(...) Marble::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define MARBLE_CLIENT_INFO(...) Marble::Logger::GetClientLogger()->info(__VA_ARGS__)
#define MARBLE_CLIENT_WARN(...) Marble::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define MARBLE_CLIENT_ERROR(...) Marble::Logger::GetClientLogger()->error(__VA_ARGS__)
