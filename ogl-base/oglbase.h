#pragma once

// Standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>

// OpenGL libraries
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Math libraries
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/matrix_transform.hpp>

#define Vec2 glm::vec2
#define Vec3 glm::vec3
#define Mat4 glm::mat4

// Use vector and string from stl
using std::vector;
using std::string;

// Game loop
void loop();
