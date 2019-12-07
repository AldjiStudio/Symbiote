#pragma once

#include "Core.h"

namespace Symbiote
{

	class SYMBIOTE_API Application
	{
		public :
			Application();
			virtual ~Application();

			void Run();

	};

	Application* CreateApplication();
}

