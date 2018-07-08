#include "Kernel.h"

GLFWwindow* window;
float dt = 0.0f;

Kernel::Kernel()
{

	// Initialise GLFW
	if (!glfwInit()) {
		throw "Failed to initialize GLFW\n ";
		exit(1);
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

}

Kernel::~Kernel()
{
	glfwTerminate();
}


/**
 * Crate an OpenGL context and window
 * 
 * @param {unsigned int} width Width of the window
 * @param {unsigned int} height Height of the window
 * @param {const char*} Window title
 */
void Kernel::create(unsigned int width, unsigned int height, const char* title)
{

	// Open a window and create its OpenGL context
	window = glfwCreateWindow(width, height, title, NULL, NULL);

	if (window == NULL) {
		glfwTerminate();
		throw "Failed to open GLFW window.\n";
		exit(1);
	}
	glfwMakeContextCurrent(window);

	// Initialize GLEW
	glewExperimental = true; // Needed for core profile
	if (glewInit() != GLEW_OK) {
		glfwTerminate();
		throw "Failed to initialize GLEW\n";
		exit(1);
	}

	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	// Set the mouse at the center of the screen
	glfwPollEvents();
	glfwSetCursorPos(window, width / 2, height / 2);

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_CULL_FACE);

}

/**
 * Run the game loop
 */
void Kernel::run()
{

	double lastTime = glfwGetTime();

	// Run game loop
	do {

		double time = glfwGetTime();
		dt = time - lastTime;

		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Loop callback
		loop();

		// Swap buffers
		glfwSwapBuffers(window);
		glfwPollEvents();

		lastTime = time;

	} while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS &&
		glfwWindowShouldClose(window) == 0);

}
