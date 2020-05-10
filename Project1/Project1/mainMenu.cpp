#include "mainMenu.h"

MainMenu::MainMenu()
{
	Menu::setHeader("****Main Menu****");
	Menu::setItem("Settings..", true);
	Menu::setItem("Run Bubblesort..", true);
	Menu::setItem("Run Quicksort..", true);
	Menu::setItem("Run Selectionsort..", true);
	Menu::setItem("Exit..", true);
}
