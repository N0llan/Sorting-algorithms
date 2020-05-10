#include "Sort.h"

Sort::Sort(string p_name) {
	sortingAlgoritmName = p_name;
}

void Sort::startTimer(){
	timer.startTimer();
}

void Sort::endTimer(){
	time = timer.stopTimer();
}

double Sort::getTime()
{
	return time;
}

string Sort::getName() { 
	return sortingAlgoritmName;
}
