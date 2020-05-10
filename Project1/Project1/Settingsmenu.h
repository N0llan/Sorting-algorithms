
#pragma once
#include "Menu.h"
#include <iostream>

using namespace std;

class Settingsmenu : public Menu {
	public:
		Settingsmenu();
		void setLowest(int p_lowest);
		void setHighest(int p_highest);
		void setQuantity(int p_quantity);
		int getLowest();
		int getHighest();
		int getQuantity();
		void showCurrentSettings();
	private:
		int lowest, highest, quantity;
};




