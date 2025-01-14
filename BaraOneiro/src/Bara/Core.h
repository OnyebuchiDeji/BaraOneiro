#pragma once



//	Define macro that's either dll import or export depending on whether or not the DLL file will be built
#ifdef BRNR_PLATFORM_WINDOWS
	#ifdef BRNR_BUILD_DLL	//	<-- meaning this is for when this Project DLL will be built, but not for the sandbox
		#define BRNR_API __declspec(dllexport)
	#else
		#define BRNR_API __declspec(dllimport)
	#endif
#else	//	This error is triggered if no platforms are defined.
	#error BaraOneiro Only Supports Windows!
		
#endif