// Entry Point will define the main function for us
#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Monica::Application* Monica::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Monica::CreateApplication();
	app->Run();
	delete app;
}
#endif