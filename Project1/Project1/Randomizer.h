#pragma once
using namespace std;
#include <vector>

class Randomizer {
	private:
		int min, max;
		float f_min, f_max;
	
	public:
		vector<float> getRandomNum(int numOfValues);
		Randomizer(int p_min, int p_max);
		Randomizer() {};
};

