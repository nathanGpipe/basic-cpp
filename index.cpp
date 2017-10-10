#include "Concert.h"
#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include <algorithm>

int main(int argc, char** argv) {
	
	std::tm t;
	
	std::vector<std::string> f;
	
	Concert::Concert c;
	
	std::vector<Concert> concerts;
	
	t.tm_year = 2017;
	t.tm_mon = 10;
	t.tm_mday = 11;
	concerts.push_back(Concert::Concert("The Meat Man", f, 5, t));
	
	t.tm_year = 2018;
	t.tm_mon = 4;
	t.tm_mday = 25;
	concerts.push_back(Concert::Concert("X Ambassadors", f, 4, t));
	
	t.tm_year = 2017;
	t.tm_mon = 9;
	t.tm_mday = 11;
	concerts.push_back(Concert::Concert("Imagine Dragons", f, 3, t));
	
	t.tm_year = 2017;
	t.tm_mon = 10;
	t.tm_mday = 12;
	concerts.push_back(Concert::Concert("Katie Parry", f, 2, t));
	
	t.tm_year = 2017;
	t.tm_mon = 10;
	t.tm_mday = 11;
	concerts.push_back(Concert::Concert("Some Guy with a Guitar", f, 1, t));
	
	std::sort(concerts.begin(), concerts.end());
	for(Concert c : concerts) {
		std::cout << c.concertName << "\n" << c.desire << "\n" 
		<< c.date.tm_year << "/" << c.date.tm_mon+1 << "/" << c.date.tm_mday 
		<< "\n" << std::endl;
	}
	
	return 0;
}