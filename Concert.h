#ifndef _H_CONCERT
#define _H_CONCERT

#include <string>
#include <vector>
#include <ctime>
#include <iostream>

/*
	A concert object. Containing the name of the concert, list of friends
	you would take to see it, a 1-10 rating on how much you would like to see
	it, and the show date.
*/
class Concert {
	
	public:
		// Who will be performing?
		std::string concertName;

		// A list of the people you want
		// to take with you.  May be empty
		// or arbitrarily full.
		std::vector<std::string> friends;

		// A value from 1-10 concerning how
		// badly you want to see this show.
		int desire;

		// The date of the show
		// See http://en.cppreference.com/w/cpp/chrono/c/tm
		std::tm date;
	
		/*
			Constructs a concert with no name, a 5 rating, no date, and no friends
		*/
		Concert();
		
		/*
			Constructs a concert to user specifications
		*/
		Concert(std::string name, std::vector<std::string> f, int rating, std::tm d);
		
		/*
			Compares if this concert is less than another, using the show date first
			the comparing the desire level if the dates are the same.
		*/
		bool operator<(const Concert& other) const;
		
		//friend std::ostream& operator<<(std::ostream& o, const Concert& c);
	
};

#endif
