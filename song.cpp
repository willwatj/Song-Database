#include <iostream>
#include <string>
#include "song.h"
using namespace std;

Song::Song() {
    title = "";
    artist = "";
    genre = "";
    year = 0;
    playTimeSec = 0;
}

// Constructor 
Song::Song(string title, string artist, string genre, int year, int playTimeSec) {
    this->title = title;
    this->artist = artist;
    this->genre = genre;
    this->year = year;
    this->playTimeSec = playTimeSec;
}
string Song::getTitle() const {
    return title;
}

// Output song information
void Song::print() const {
    cout << "Title: " << title << endl;
    cout << "Artist: " << artist << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Play Time (sec): " << playTimeSec << endl;
    cout << endl;
}

