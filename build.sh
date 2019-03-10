#!/bin/bash

g++ -DIMGUI_INCLUDE_IMGUI_USER_INL=1 examples/richtitlebar.cpp examples/imgui_impl_sdl.cpp examples/imgui_impl_opengl3.cpp imgui_richtext.cpp imgui_mainwindow.cpp imgui_widgets.cpp imgui.cpp imgui_demo.cpp imgui_draw.cpp -I. -Iexamples -I/usr/include/SDL2 -lSDL2 -lGL -lm -lGLEW -o richtitlebar
