#pragma once

#ifdef EG_PLATFORM_WINDOWS
	#ifdef EG_BUILD_DLL
		#define ENGIONE_API __declspec(dllexport)
	#else
		#define ENGIONE_API __declspec(dllimport)
	#endif // EG_BUILD_DLL
	#else
		#error Engione only supports windows
#endif // EG_PLATFORM_WINDOWS

