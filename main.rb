#!/usr/bin/ruby

=begin

SleetWM PreAlpha 0.0.1_1
Programmer: Pablo Orduna (end222)

=end

require 'xlib-objects'

class WinMan
	# Creates a new display
	def initialize()
		@display = XlibObj::Display.new(':0')
	end

	# SOME COMMENT NEEDED
	def run
		while 1
		end
	end

	# Starts the WM by setting root to display
	def startWM(display)
		@root = display.screens.first.root_window
	end

	# Stops the WM
	def stopWM()
		@display.close
	end
end

sleet = WinMan.new()
sleet.run()
