#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include "Concert.h"


Concert::Concert() {
	concertName = "";
	desire = 5;
}

Concert::Concert(std::string name, std::vector<std::string> f, int rating, std::tm d) {
	concertName = name;
	friends = f;
	desire = rating;
	date = d;
}

bool Concert::operator<(const Concert& other) const {
	
	if(date.tm_year < other.date.tm_year)
		return true;
	else if((date.tm_year == other.date.tm_year) && 
			(date.tm_mon < other.date.tm_mon))
		return true;
	else if((date.tm_year == other.date.tm_year) &&
			(date.tm_mon == other.date.tm_mon) && 
			(date.tm_mday < other.date.tm_mday))
		return true;
	else if((date.tm_year == other.date.tm_year) &&
			(date.tm_mon == other.date.tm_mon) &&
			(date.tm_mday == other.date.tm_mday) &&
			(desire < other.desire))
		return true;
		
	return false;
}

/*std::ostream& Concert::operator<<(std::ostream& o, const Concert& c) {
	o << c.concertName << "\n" << c.desire << "\n" 
	<< c.date.tm_year << "/" << c.date.tm_mon+1 << "/" << c.date.tm_mday << std::endl;
	return o;
}*/