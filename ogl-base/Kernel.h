#pragma once

#include "oglbase.h"

class Kernel
{
public:

	Kernel();
	~Kernel();

	void create(unsigned int width, unsigned int height, const char* title);
	void run();

};

