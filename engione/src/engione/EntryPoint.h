#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern engione::Application* engione::CreateApplication();

int main(int argc, char** argv) {

	
	auto app = engione::CreateApplication();
	app->Run();
	delete app;
}

#endif