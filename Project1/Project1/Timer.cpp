#include "Timer.h"

Timer::Timer() {

}

Timer::~Timer() {

}

void Timer::startTimer() {
	startTime = clock();
}

double Timer::stopTimer() {
	passedSeconds = double(clock() - startTime) / CLOCKS_PER_SEC ;
	return passedSeconds;
}
