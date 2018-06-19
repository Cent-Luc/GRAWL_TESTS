// GRAWL_TEST_1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include"GRAWL.h"

int main()
{
	GRAWL Grawl;//Declare Grawl. Grawl is initialized by the constructor
	//Create a window
	/*optional, get the monitor dimensions and create the window. Uncomment this and comment the subsequent create window and vice versa
	//That would be according to your desire*/
	//Now get the dimensions
	Grawl.getMonitorDimensions();
	GRAWLwindow window=Grawl.createWindow(Grawl.monitorWidth, Grawl.monitorHeight, "GRAWL: Hello Window", false);
	/*GRAWLwindow window=Grawl.createWindow(800, 600, "GRAWL Test 1:", false);*/
	if (!window.success) {
		cout << "initialization errors encountered"<<endl;
		cin.get();
		return -1;
	}
	while (!window.windowIsToClose()) {
		window.clear(0.2f,0.3f,0.3f,1.0f);
		window.swapBuffers();
	}
	Grawl.exitGrawl();
	return 0;
}
