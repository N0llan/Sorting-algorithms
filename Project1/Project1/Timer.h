#pragma once
#include <chrono>

using namespace std;


class Timer {
	private:
		clock_t startTime; //Holds the starttime
		double passedSeconds;
	public:
		Timer(); //Construct
		~Timer();//Destruct
		void startTimer();
		double stopTimer();
};