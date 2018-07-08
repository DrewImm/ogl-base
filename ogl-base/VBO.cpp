#include "VBO.h"

void VBO::create()
{

	glGenVertexArrays(1, &verticesId);
	glBindVertexArray(verticesId);

}

VBO::~VBO()
{

	glDeleteVertexArrays(1, &verticesId);

}
