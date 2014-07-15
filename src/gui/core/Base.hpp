#pragma once

#include "core/Core.hpp"
#include <memory>

class GuiBase;

typedef std::shared_ptr<GuiBase> gui_ptr;

class GuiBase
{
protected:
	Core &m_core;
	
public:
	GuiBase();
	virtual void update() = 0;
};

