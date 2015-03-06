#include "testincc.h"
#include "TestinUiautomator.h"



bool StartTestinObserver() {
	TestinUIAutomator::getInstance()->startServer();
	return true;
}

void RegisterTestinCCScene(void* scene, const char* name) {
	TestinUIAutomator::getInstance()->registerScene(scene, name);
}

