#include <Monica.h>

class Sandbox : public Monica::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

private:

};

Monica::Application* Monica::CreateApplication()
{
	return new Sandbox();
}