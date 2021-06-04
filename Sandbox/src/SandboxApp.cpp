#include <Engione.h>

class Sandbox : public engione::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};
 
engione::Application* engione::CreateApplication()
{
	return new Sandbox();
}