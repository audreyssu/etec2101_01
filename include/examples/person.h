#pragma once
#include <string>

using namespace std;

class Person {
	int id;
	string first_name;
	string last_name;
	float hourly_rate;
	unsigned int hours_worked;


	float calculate_wage();
};