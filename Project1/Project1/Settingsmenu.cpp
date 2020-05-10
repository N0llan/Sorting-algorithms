#include "Settingsmenu.h"

Settingsmenu::Settingsmenu()
{
	Menu::setHeader("****Settings****");
	Menu::setItem("Set quantity to be ranomized..", true);
	Menu::setItem("Set the lowest value of the randomized numbers..", true);
	Menu::setItem("Set the highest value of the randomized numbers..", true); 
	Menu::setItem("Show current settings..", true);
	Menu::setItem("Back..", true);

	setQuantity(30);
	setLowest(0);
	setHighest(100);

}

void Settingsmenu::setLowest(int p_lowest)
{
	lowest = p_lowest;
}

void Settingsmenu::setHighest(int p_highest)
{
	highest = p_highest;
}

void Settingsmenu::setQuantity(int p_quantity)
{
	quantity = p_quantity;
}

int Settingsmenu::getLowest()
{
	return lowest;
}

int Settingsmenu::getHighest()
{
	return highest;
}

int Settingsmenu::getQuantity()
{
	return quantity;
}

void Settingsmenu::showCurrentSettings() {
	cout << "Current quantity: " << getQuantity() << endl;
	cout << "Current lowest value: " << getLowest() << endl;
	cout << "Current highest value: " << getHighest() << endl;

	system("pause");
	
}
