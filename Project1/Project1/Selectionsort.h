#pragma once
#include "Sort.h"
using namespace std;

class Selectionsort : public Sort {
	private:
		int min_index;
	public:
		Selectionsort();
		void sort(vector<float> &data);
};