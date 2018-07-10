# Changelog

## Build System [0.2.0] - 2018-07-10

### Additions

- [Documentation] - Created in-source Changelog
- [Documentation] - Improved build documentation
- Created rebuild script
- Created clean script
- CMake - Automatically generate source list

### Fixes
- Expanded build script for all build systems


## Kernel [0.1.0] - 2018-07-08

Created the Kernel, VBO, and game loop.

### Additions
- Created the Kernel to create and maintain the OpenGL context
- Created the VBO class to take care of the OpenGL Vertex buffer object
- Created the game loop and deltaTime

### Fixes
- Created oglbase.h instead of ogl-base.h to avoid the renaming script (./script/create-app)


## Base Build [0.0.1] - 2018-07-08

Initial release

