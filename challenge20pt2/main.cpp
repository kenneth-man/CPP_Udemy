// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song {
    friend ostream &operator<<(ostream &os, const Song &s);
    string name;
    string artist;
    int rating;
public:
    Song() = default;
    Song(string name, string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    string get_name() const {
        return name;
    }
    string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

ostream &operator<<(ostream &os, const Song &s) {
    os << setw(20) << left << s.name
       << setw(30) << left << s.artist
       << setw(2) << left << s.rating;
       return os;
}

const char firstSong {'F'};
const char nextSong {'N'};
const char prevSong {'P'};
const char addSong {'A'};
const char listSongs {'L'};
const char quit {'Q'};
const string firstSongLabel {"First Song"};
const string nextSongLabel {"Next Song"};
const string prevSongLabel {"Previous Song"};

void display_menu() {
    cout << '\n' << firstSong << " - Play First Song" << endl;
    cout << nextSong << " - Play Next song" << endl;
    cout << prevSong << " - Play Previous song" << endl;
    cout << addSong << " - Add and play a new Song at current location" << endl;
    cout << listSongs << " - List the current playlist" << endl;
    cout << "===============================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_song(
	list<Song> &playlist,
	list<Song>::iterator &current_song,
	const string label
) {
    if (label == firstSongLabel) {
		current_song = playlist.begin();
	}

	if (label == nextSongLabel) {
		if (current_song == --playlist.end()) {
			current_song = playlist.begin();
		} else {
			current_song++;
		}
	}

	if (label == prevSongLabel) {
		if (current_song == playlist.begin()) {
			current_song = --playlist.end();
		} else {
			current_song--;
		}
	}

    cout << '\n' << "Playing " << label << '\n';
	cout << "Song:" << '\n';
	cout << *current_song << '\n';
}

void add_song(
	list<Song> &playlist,
	list<Song>::iterator &current_song
) {
	string name;
	string artist;
	int rating;

	cout << '\n' << "Adding before current song and playing new song" << '\n';
	cout << "Enter song name: ";
	cin >> name;

	cout << "Enter song artist: ";
	cin >> artist;

	cout << "Enter song rating (1-5): ";
	cin >> rating;

	if (!cin.good() || !(rating > 0 && rating < 6)) {
		/*
			`.clear();`
				When input operations fail the input stream goes into a "fail" state, and further input operations will be ignored
				until the error state is cleared. `clear()` is used to reset the error flags
			`.ignore(numeric_limits<streamsize>::max(), '\n');`
				Ignores up to the maximum number of characters until it encounters a newline character ('\n')
				Used to clear the input buffer in case there are any remaining characters left after a failed input operation
		*/
		cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << '\n' << "INVALID TYPE/VALUE FOR RATING" << '\n';
		cout << "REQUIRED TYPE: INT" << '\n';
		return;
	}

	Song s {name, artist, rating};
	playlist.insert(current_song, s);

	play_song(playlist, current_song, prevSongLabel);
}

void display_playlist(const list<Song> &playlist, const Song &current_song) {
    int index {0};

    for (const Song &p : playlist) {
		cout << p;
		if (index != static_cast<int>(playlist.size()) - 1) cout << '\n';
	}

	cout << '\n' << "Current Song:" << '\n';
	cout << current_song << '\n';
}

void handleInput(
	const char input,
	list<Song> &playlist,
	list<Song>::iterator &current_song,
	bool &active
) {
	const char inputUpperCase {static_cast<char>(toupper(input))};

	switch(inputUpperCase) {
		case firstSong:
			play_song(playlist, current_song, firstSongLabel);
			break;
		case nextSong:
			play_song(playlist, current_song, nextSongLabel);
			break;
		case prevSong:
			play_song(playlist, current_song, prevSongLabel);
			break;
		case addSong:
			add_song(playlist, current_song);
			break;
		case listSongs:
			display_playlist(playlist, *current_song);
			break;
		case quit:
			cout << '\n' << "Thanks for listening!" << '\n';
			active = false;
			break;
		default:
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << '\n';
			cout << "INVALID KEY INPUT, PLEASE TRY AGAIN..." << '\n';
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << '\n';
	}
}

int main() {
    list<Song> playlist {
		{"God's Plan",        "Drake",                     5},
		{"Never Be The Same", "Camila Cabello",            5},
		{"Pray For Me",       "The Weekend and K. Lamar",  4},
		{"The Middle",        "Zedd, Maren Morris & Grey", 5},
		{"Wait",              "Maroone 5",                 4},
		{"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    list<Song>::iterator current_song = playlist.begin();
    char input {};
	bool active {true};

	while (active) {
		display_menu();

		cin >> input;

		handleInput(input, playlist, current_song, active);
	}

    return 0;
}