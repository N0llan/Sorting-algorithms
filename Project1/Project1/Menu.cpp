#include "Menu.h"
#include <iostream>


Menu::Menu() {

}

void Menu::setItem(string p_data, bool visible)
{
	MenuItem item;
	item.setMenuText(p_data);
	item.setValbar(visible);
	items.push_back(item);
}

int Menu::selectItem()
{
	int userInput;
	cin >> userInput;

	int count = 0; //Skapar en räknare
	for (auto item : items) //Loopar med den förenklade loopen
	{
		count++; //Ökar räknaren med 1
		if (item.getValbar() == true && count == userInput) //Kollar så att inmatade värdet går att välja och ifall det är lika med count
		{
			return userInput; //Returnerar det valda numret
		}
	}
	cout << "ERROR! Your choice is not allowed, enter another one!" << endl; //Annars säger vi att det inmatade värdet inte är tillåtet
	return 0; //Returnerar 0 
}

string Menu::getHeader() {
	return header;
}

void Menu::printMenu()
{

	cout << endl;
	cout << getHeader() << endl;
	int count = 0;
	for (auto idx : items) //loopar med förenklade loopen
	{
		count++; //räknare +1
		if (idx.getValbar() == true) //Om valbar är true skriv ut menytext
		{
			cout << count << ": " << idx.getMenuText() << endl;
		}
	}
}



void Menu::setHeader(string p_header) {
	header = p_header;
}
