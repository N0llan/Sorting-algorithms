#pragma once
#include "Sort.h"
using namespace std;

class Bubblesort : public Sort {
	public: 
		Bubblesort();
		void sort(vector<float> &data);
	private:
		bool swapped;
		bool hej;

};

