

#include "Randomizer.h"
#include <cstdlib>
#include <ctime>
#include <random>


Randomizer::Randomizer(int p_min, int p_max) {
	min = p_min;
	max = p_max;

	f_min = float(p_min);
	f_max = float(p_max);
}

vector<float> Randomizer::getRandomNum(int numOfValues)
{
	vector<float> values;
	uniform_real_distribution<float> random(f_min, f_max);
	default_random_engine generator(time(0));
	
	for (int index = 0; index < numOfValues; index++) {
		values.push_back(random(generator));
	}
	return values;
}


