// GRAWL_PRJ_2_Hello_Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"GRAWL.h"
int fn(){
	return 0;}
int main()
{
	GRAWL Grawl;//Declare Grawl. Grawl is initialized by the constructor

	GRAWLwindow window=Grawl.createWindow(800, 600, "GRAWL: Hello Triangle", false);
	if (!window.success) {
		cout << "initialization errors encountered"<<endl;
		cin.get();
		return -1;
	}
	//now add the triangle
	GRAWLscenes scene;
	scene.initialize();
	scene.addHelloTriangle();
	scene.addIntoScene(scene.helloTriangleRenderFunction);
	while (!window.windowIsToClose()) {
		window.clear(0.2f,0.3f,0.3f,1.0f);
		scene.render();
		window.swapBuffers();
	}
	Grawl.exitGrawl();
	return 0;
}