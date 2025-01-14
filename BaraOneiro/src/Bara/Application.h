#pragma once

#include "Core.h"

namespace Bara
{
	class BRNR_API Application
	{
	public:
		Application();
		//	Made virtual because this class will be subclassed by the sandbox app, ThePisaRocket
		virtual ~Application();

		void Run();
	};

	//	To be defined in the client.
	Application* CreateApplication();
}


