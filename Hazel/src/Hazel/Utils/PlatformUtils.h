#pragma once

#include <string>

namespace Hazel {

	class FileDialogs
	{
	public:
		// These return empty strings if cancelled
		static std::string OpenFile(const char* filter);
		static std::string SaveFile(const char* filter);
		static void OpenExplorer(const char* path);
	};

	class Time
	{
	public:
		static float GetTime();
	};

}
