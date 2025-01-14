
#include "Bara.h"
#include <iostream>


class Sandbox : public Bara::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Bara::Application* Bara::CreateApplication()
{
	return new Sandbox();
}

//int main()
//{
//	//	Heap allocate it because this structure can be very large.
//	Sandbox* sandbox = new Sandbox();
//	sandbox->Run();
//	delete sandbox;
//	std::cin.get();
//}