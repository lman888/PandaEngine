#pragma once
#include "Core.h"

namespace PandaEngine
{
	class PANDAENGINE_API Application
	{
	public:
		Application();

		void Run();

	};

	/* To be defined in Client */
	Application* CreateApplication();
}