
#include "Bubblesort.h"

Bubblesort::Bubblesort() : Sort("Bubblesort"){

}

void Bubblesort::sort(vector<float> &data) {
	Sort::startTimer();
	do {
		swapped = false;

		for (int index = 0; index < data.size()-1; index++) {
			if (data.at(index) > data.at(index + 1)) {
				swap(data.at(index), data.at(index + 1));
				swapped = true;
			} 
		}
	} while (swapped);
	Sort::endTimer();
}