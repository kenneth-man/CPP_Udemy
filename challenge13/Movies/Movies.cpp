#include <iostream>
#include "Movies.h"

using namespace std;

// Constructor
Movies::Movies() {
}

// Destructor
Movies::~Movies() {
}

bool Movies::add_movie(string name, string rating, int watched) {
	// reference `&` is used, because it's efficeint since we don't create object copies
	// `const` is used, to ensure we don't modify the object by reference
	for (const Movie &m: Movies::movies) {
		if (m.get_name() == name) return false;
	}

	Movie newMovie { name, rating, watched };
	Movies::movies.push_back(newMovie);

	return true;
}

bool Movies::increment_watched(string name) {
	for (Movie &m: Movies::movies) {
		if (m.get_name() == name) {
			m.increment_watched();
			return true;
		}
	}

	return false;
}

void Movies::display() const {
	if (Movies::movies.size() == 0) {
		cout << "Sorry, no movies were found to display" << endl;
		return;
	}

	cout << "==============================================" << endl;
	for (Movie m: Movies::movies) {
		m.display();
	}
	cout << "==============================================" << endl;
}