#pragma once
#include <vector>
#include "Timer.h"

using namespace std;

class Sort {
	public: 
		Sort(string p_name);
		//void sort(vector<int> data);
		void startTimer();
		void endTimer();
		double getTime();
		string getName();
	private:
		double time;
		Timer timer;
		string sortingAlgoritmName;
};