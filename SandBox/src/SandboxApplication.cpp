#include <Symbiote.h>

class SandBox : public Symbiote::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}

};

Symbiote::Application* Symbiote::CreateApplication()
{
	return new SandBox();
}