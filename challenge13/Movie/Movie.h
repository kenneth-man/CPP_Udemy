#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
using namespace std;

class Movie
{
private:
    string name; // movie name
    string rating; // movie rating (G, PG, PG-13, R)
    int watched; // number of times the movie's been watched
public:
    // Constructor
    Movie(string name, string rating, int watched);

    // Copy constructor 
    Movie(const Movie &source); 

    // Destructor
    ~Movie();

    // Getters and setters for private attributes
    void set_name(string name) {
		this->name = name;
	}

    string get_name() const {
		return name;
	}

    void set_rating(string rating) {
		this->rating = rating;
	}

    string get_rating() const {
		return rating;
	}

    void set_watched(int watched) {
		this->watched = watched;
	}

    int get_watched() const {
		return watched;
	}

    void increment_watched() {
		++watched;
	}

    // displays the movie information e.g. Big, PG-13, 2
    void display() const;
};

#endif
