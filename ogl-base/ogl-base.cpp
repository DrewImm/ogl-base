#include "oglbase.h"
#include "Kernel.h"
#include "VBO.h"

Kernel kernel;
VBO vbo;

extern float dt;

void loop ()
{

}

int main()
{
	// Create OpenGL Context
	kernel.create(1024, 768, "ogl-base");

	// Create VBO
	vbo.create();

	// Run game loop
	kernel.run();


	return 0;
}