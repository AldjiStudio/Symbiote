#pragma once

#ifdef SYMBIOTE_PLATFORM_WINDOWS
extern Symbiote::Application* Symbiote::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Symbiote::CreateApplication();
	app->Run();
	delete app;
}

#endif