#pragma once

#include <gui/core/Base.hpp>
#include <gui/gtk/Gtk.hpp>
#include <core/Core.hpp>
#include <memory>

// I know this double class thing is fucking ugly, but it's need here just for this one class.
class Application;

class Application
{
private:
	static Application *m_app;
	
	Core *m_core;
	gui_ptr m_gui;

public:
	Application();
	static Application &getSingleton();

	// Getters
	Core &getCore();

	// Public Member Functions & Variables
	int run(int argc, char **argv);
};

