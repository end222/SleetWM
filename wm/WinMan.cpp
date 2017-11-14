/*
 * SleetWM Project
 * By Pablo Orduna (end222)
 * File: wm/WinMan.c
 */

extern "C" {
	#include <X11/Xlib.h>
	#include <X11/Xutil.h>
}
#include "WinMan.h"
#include <iostream>
#include <memory>

using namespace std;


// Initialization of the display
unique_ptr<WM> WM::Create(){
	Display* disp = XOpenDisplay(nullptr);
	return unique_ptr<WM>(new WM(disp));
}

// Destructor -> Disconnects from the X server.
WM::~WM(){
	XCloseDisplay(disp_);	
}	

// The entry point to this class. Enters the main event loop.
void WM::Run(){

}

// Constructor
WM::WM(Display* disp)
	: root_(DefaultRootWindow(disp_)){
}
