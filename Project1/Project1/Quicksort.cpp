#include "Quicksort.h"

QuickSort::QuickSort() : Sort("Quicksort") {

}

void QuickSort::sort(vector<float>& data, int lo, int hi) {
	Sort::startTimer();

	qs(data, lo, hi);

	Sort::endTimer();
}

void QuickSort::qs(vector<float>& data, int lo, int hi) {
	if (lo < hi) {
		int pi = partition(data, lo, hi);

		qs(data, lo, pi - 1);
		qs(data, pi + 1, hi);
	}
}


int QuickSort::partition(vector<float> &data, int lo, int hi) {

	float pivot = data.at(hi);

	int i = (lo - 1);

	for (int j = lo; j <= hi - 1; j++) {
		if (data.at(j) < pivot) {
			i++;
			swap(data.at(i), data.at(j));

		}
	}
	swap(data.at(i + 1), data.at(hi));
	return (i + 1);

}