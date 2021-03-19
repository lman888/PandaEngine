#pragma once

#ifdef PE_PLATFORM_WINDOWS

/* Function we create that will return the application */
/* (Extern means this will be found somewhere else, in our cass in Sandbox.cpp */
extern PandaEngine::Application* PandaEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("PandaEngine");
	/* Calls the Create application in our Application.cpp, then calls the Run function */
	auto m_app = PandaEngine::CreateApplication();
	m_app->Run();
	delete m_app;
}

#endif