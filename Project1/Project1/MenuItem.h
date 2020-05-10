
//Objektorienterad programmering i c++
//Mittuniversitetet
//Daniel Jennebo, 2015-02-25
//Projekt - MenuItem.h
//------------------------------------


#ifndef MENUITEM_H
#define MENUITEM_H

	#include <string>

	using namespace std;
	
	class MenuItem
	{
	//Datamedlemmar
		private:
			string menuText;
			bool valbar;
	//Medlemsfunktioner
		public:
			MenuItem() {};
		//Setfunktioner
			void setMenuText(string pMenuText) {menuText = pMenuText;} //S�tter menuText till parameterns v�rde
			void setValbar(bool pValbar) {valbar = pValbar;} //S�tter valbar till parameterns v�rde
		//Getfunktioner
			string getMenuText() const {return menuText;} //Returnerar menuText
			bool getValbar() const {return valbar;} //Returnerar valbar
	};



#endif