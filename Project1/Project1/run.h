#pragma once

//------------------------------------------

#include "Bubblesort.h"
#include "Quicksort.h"
#include "Randomizer.h"
#include "mainMenu.h"
#include "Settingsmenu.h"
#include "Selectionsort.h"
#include <iostream>
#include <string>
#include <ctime>

//------------------------------------------

using namespace std;

class run {
	public:
		void viewSettingsMenu();
		void viewMainMenu();
		run();
		void viewNumbers();
		void runBubblesort();
		void runQuicksort();
		void runSelectionsort();
		void viewSortInfo(Sort sortingAlgoritm);
		void fillRandomNumbers();
	private:
		MainMenu mainMenu;
		Settingsmenu settingsMenu;
		Randomizer randomizer;
		vector<float> numbers;
		Bubblesort bubblesort;
		QuickSort quicksort;
		Selectionsort selectionsort;
};


