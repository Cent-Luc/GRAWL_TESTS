// Hello Triangle Indexed.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"GRAWL.h"

int main()
{
	GRAWL Grawl;//Declare Grawl. Grawl is initialized by the constructor
	GRAWLwindow window=Grawl.createWindow(800, 600, "GRAWL Test 1: Hello Triangle Indexed", false);
	if (!window.success) {
		cout << "initialization errors encountered"<<endl;
		cin.get();
		return -1;
	}

	//now add the indexed triangle
	GRAWLscenes scene;
	scene.initialize();
	scene.addTexturedHelloTriangle();
	scene.addIntoScene(scene.texturedHelloTriangleRenderFunction);
	while (!window.windowIsToClose()) {
		window.clear(0.2f,0.3f,0.3f,1.0f);
		scene.render();
		window.swapBuffers();
	}
	Grawl.exitGrawl();
	return 0;
}
