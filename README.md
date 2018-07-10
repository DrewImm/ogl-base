# OpenGL Base
by Drew Immerman

https://github.com/DrewImm/ogl-base

This is a base project for OpenGL C++ development.

It includes the following libraries:

- OpenGL
- GLEW
- GLFW
- GLM

## Download

Git clone this repository for the latest version

```
git clone https://github.com/DrewImm/ogl-base .
```

## Customize

You will probably want your project and files to be called something other than "ogl-base".  Just run

```
./script/create-app {NEW_PROJECT_NAME}
```

This will initialize a new git repo for you, and rename your app.  Now you should build the app with CMake in the next steps.


## Build Makefile (Visual Studio)

To build a solution for the latest version of Visual Studio (2017), run this.

```
./script/build
```

For older versions of Visual Studio, look on to the next section.


## Build Makefile (Mac/Linux/Other)

You must know your CMAKE Generator name.  You can find this by typing `cmake --help`, and it should look something like this (this example is for Eclipse MinGW):

```
Eclipse CDT4 - MinGW Makefiles
```

Now, remember (or copy & paste) that string into here (don't f*** up the double-quotes, please):

```
./script/build "CMAKE_GENERATOR_NAME"
```


## Build Binaries

You can now build your app by opening the solution in `build/`
