#include "Test.h"

void Test::test() {
	cout << "Methode de test" << endl;
}

void Test::testLancementApp() {
	Application * app = Application::getApplication();

	while (true) {
		app->commencerVueActuel();
	}
}