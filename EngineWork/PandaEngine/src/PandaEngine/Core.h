#pragma once

#ifdef PE_PLATFORM_WINDOWS
	#ifdef PE_BUILD_DLL
		#define PANDAENGINE_API __declspec(dllexport)
	#else
		#define PANDAENGINE_API __declspec(dllimport)
	#endif // PE_BUILD_DLL
#else
	#error PandaEngine only supports Windows!
#endif // PE_PLATFORM_WINDOWS
