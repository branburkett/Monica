// I believe Application files are the actual "game loop" files.
// The SandboxApp file in Sandbox is the client that uses this "game engine loop"

#pragma once

#include "Core.h"

namespace Monica {

	class MONICA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:

	};

	// To be defined in client
	Application* CreateApplication();

}