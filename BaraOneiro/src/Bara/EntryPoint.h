#pragma once


#ifdef BRNR_PLATFORM_WINDOW

//	This is a function that creates the application for us.
//	This will be implemented in the client.
extern Bara::Application* Bara::CreateApplication();

int main(int argc, char** argv)
{
	//	Heap allocate it because this structure can be very large.
	//Sandbox* sandbox = new Sandbox();
	Bara::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}



#endif
