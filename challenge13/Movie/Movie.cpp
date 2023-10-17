#include <iostream>
#include "Movie.h"

using namespace std;

// Construcor
Movie::Movie(string name, string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

// Copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

// Destructor
Movie::~Movie() {
}

void Movie::display() const {
    cout << name << ", " << rating << ", " << watched << endl;
}
