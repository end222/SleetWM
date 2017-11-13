/*
 * SleetWM Project
 * By Pablo Orduna (end222)
 * File: wm/WinMan.cpp
 */
extern "C" {
	#include <X11/Xlib.h>
}
#include <iostream>
#include <memory>

using namespace std;

class WM {
 public:
  // Factory method for establishing a connection to an X server and creating a
  // WM class
  static unique_ptr<WM> Create();

  // Disconnects from the X server.
  ~WM();

  // The entry point to this class. Enters the main event loop.
  void Run();

 private:
  // Invoked internally by Create().
  WM(Display* disp);

  // Handle to the underlying Xlib Display struct.
  Display* disp_;

  // Handle to root window.
  const Window root_;
};
