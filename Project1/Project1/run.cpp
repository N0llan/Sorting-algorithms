#include "run.h"
#include <stdlib.h>


run::run() {
	viewMainMenu();
}

void run::viewSettingsMenu() {
	int input;
	settingsMenu.printMenu();
	switch (settingsMenu.selectItem()) {
	case 1: cout << "Enter the new quantity value: ";
		cin >> input;
		settingsMenu.setQuantity(input);
		break;
	case 2: cout << "Enter the new lowest value: ";
		cin >> input;
		settingsMenu.setLowest(input);
		break;
	case 3: cout << "Enter the new highest value: ";
		cin >> input;
		settingsMenu.setHighest(input);
		break;
	case 4: settingsMenu.showCurrentSettings();
		break;
	case 5: viewMainMenu();
		break;
	}
	viewSettingsMenu();
}

void run::viewMainMenu()
{
	mainMenu.printMenu();
	switch (mainMenu.selectItem()) {
	case 1: viewSettingsMenu();
		break;
	case 2: runBubblesort();//Kör bubblesort;
			break;
	case 3: runQuicksort();//Kör quicksort;
		break;
	case 4: runSelectionsort(); //Kör selectionsort;
		break;
	case 5: exit(EXIT_SUCCESS);
		break;
	}
	viewMainMenu();
}



void run::viewNumbers()
{
	for (auto num : numbers) {
		cout << num << endl;
	}
	
}

void run::runBubblesort() {
	fillRandomNumbers();
	viewNumbers();
	cout << endl << endl;
	bubblesort.sort(numbers);
	viewNumbers();
	viewSortInfo(bubblesort);
}

void run::runQuicksort() {
	fillRandomNumbers();
	//viewNumbers();
	cout << endl << endl;
	quicksort.sort(numbers, 0, numbers.size()-1);
	//viewNumbers();
	viewSortInfo(quicksort);
}

void run::runSelectionsort() {
	fillRandomNumbers();
	viewNumbers();
	cout << endl << endl;
	selectionsort.sort(numbers);
	viewNumbers();
	viewSortInfo(selectionsort);
}

void run::viewSortInfo(Sort sortingAlgoritm) {
	cout << endl << "You sorted: " << endl;
	cout << "Quantity: " << settingsMenu.getQuantity() << endl;
	cout << "Highest number sorted: " << settingsMenu.getHighest() << endl;
	cout << "Lowest number sorted: " << settingsMenu.getLowest() << endl;
	cout << "You sorted this with: " << sortingAlgoritm.getName() << endl;
	cout << "This took: " << to_string(sortingAlgoritm.getTime()) << " seconds." << endl;

}

void run::fillRandomNumbers() {
	randomizer = Randomizer(settingsMenu.getLowest(), settingsMenu.getHighest());
	numbers = randomizer.getRandomNum(settingsMenu.getQuantity());
}





