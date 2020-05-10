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

	int count = 0; //Skapar en r�knare
	for (auto item : items) //Loopar med den f�renklade loopen
	{
		count++; //�kar r�knaren med 1
		if (item.getValbar() == true && count == userInput) //Kollar s� att inmatade v�rdet g�r att v�lja och ifall det �r lika med count
		{
			return userInput; //Returnerar det valda numret
		}
	}
	cout << "ERROR! Your choice is not allowed, enter another one!" << endl; //Annars s�ger vi att det inmatade v�rdet inte �r till�tet
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
	for (auto idx : items) //loopar med f�renklade loopen
	{
		count++; //r�knare +1
		if (idx.getValbar() == true) //Om valbar �r true skriv ut menytext
		{
			cout << count << ": " << idx.getMenuText() << endl;
		}
	}
}



void Menu::setHeader(string p_header) {
	header = p_header;
}
