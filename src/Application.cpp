#include "Application.hpp"
#include <core/Log.hpp>

shared_ptr<Application> Application::m_app = nullptr;

shared_ptr<Application> Application::getSingleton()
{
	if (m_app == nullptr)
		m_app = shared_ptr<Application>(new Application());
	return m_app;
}

shared_ptr<gt::Core> &Application::getCore()
{
	return m_core;
}

int Application::run(int argc, char **argv)
{
	gt::Log::Debug("Starting up core library...");
        gt::Log::Debug("GTorrent v." GTORRENT_VERSION);
	m_core = make_shared<gt::Core>();

<<<<<<< HEAD
=======
	gt::Log::Debug("Starting up GUI layer...");
	m_gui = make_shared<GuiGtk>(argc, argv);

>>>>>>> a7e10fe5a944ab91a7ac7659fcc949c915154bbc
	while (m_core->isRunning()) {
		m_core->update();	}

	return 0;
}
