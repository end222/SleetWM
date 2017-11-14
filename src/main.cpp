/*
 * SleetWM Project
 * By Pablo Orduna (end222)
 * File: src/main.c
 */

extern "C" {
	#include <X11/Xlib.h>
}
#include <glog/logging.h>
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char** argv){
	::google::InitGoogleLogging(argv[0]);
	return 0;
}
