#include "Selectionsort.h"

Selectionsort::Selectionsort() : Sort("Selectionsort") {
	min_index = 0;
}

void Selectionsort::sort(vector <float> &data) {
	Sort::startTimer();

	for (int index = 0; index < data.size(); index++) {
		int min_index = index;
		for (int jindex = index + 1; jindex < data.size(); jindex++) {
			if (data.at(jindex) < data.at(min_index)) {
				min_index = jindex;
			}
		}
		swap(data.at(index), data.at(min_index));
	}

	Sort::endTimer();
}