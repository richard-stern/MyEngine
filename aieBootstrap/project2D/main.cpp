#include "Application2D.h"
#include <crtdbg.h>

int main() 
{
	//Leonado
	//Meow
	
	//At start of main()
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Application2D* app = new Application2D();
	app->run("AIE", 1280, 720, false);
	delete app;

	// Dog
	return 0;
}