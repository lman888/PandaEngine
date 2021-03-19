#include <PandaEngine.h>

class Sandbox : public PandaEngine::Application
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

PandaEngine::Application* PandaEngine::CreateApplication()
{
	/* Returns a sandbox class instance */
	return new Sandbox();
}