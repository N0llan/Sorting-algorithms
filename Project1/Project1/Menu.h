#pragma once
#include <string>
#include <vector>
#include "MenuItem.h"
using namespace std;

class Menu {
	private:
		string header;
		vector<MenuItem> items;

	public:
		string getHeader();
		void printMenu();
		void setHeader(string p_header);
		Menu();
		void setItem(string p_data, bool visible);
		int selectItem();
};
	

