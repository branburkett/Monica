// We wrote MN_PLATFORM_WINDOWS and MN_BUILD_DLL in c++ preprosser settings. 
// This bascially says if we are on windows and we are building Monica (aka the game engine), then 
//		we want to use __declspec(dllexport) so that Sandbox can use __declspec(dllimport) and use the functions
//		we defined in Monica.

#pragma once

#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL
		#define	MONICA_API __declspec(dllexport)
	#else
		#define MONICA_API __declspec(dllimport)
	#endif // MN_BUILD_DLL
#else
	#error Monica only supports windows

#endif