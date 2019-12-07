#pragma once

#ifdef SYMBIOTE_PLATFORM_WINDOWS
	#ifdef SYMBIOTE_BUILD_ALL
		#define SYMBIOTE_API __declspec(dllexport)
	#else
		#define	SYMBIOTE_API __declspec(dllimport)	
	#endif
#else
	#error SYMBIOTE ONLY SUPPORT WINDOWS
#endif