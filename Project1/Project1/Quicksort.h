#pragma once
#include "Sort.h"

using namespace std;

class QuickSort : public Sort {
	
	private:
		bool swapped; 
	public:
		QuickSort();
		void sort(vector<float> &data, int lo, int hi);
		int partition(vector<float> &data, int lo, int hi);
		void qs(vector<float> &data, int lo, int hi);
};