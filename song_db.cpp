#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "song_db.h"
using namespace std;

// Constructor
SongDB::SongDB() {
    size = 0;
}

// Add a song to the database
void SongDB::Add(string title, string artist, string genre, int year, int playTimeSec) {
    if (size >= MAX_SONGS) {
        cout << "Database is full." << endl;
        return;
    }
    songs[size] = Song(title, artist, genre, year, playTimeSec);
    size++;
}

// Delete all songs
void SongDB::DeleteAll() {
    size = 0;
    cout << "All songs deleted." << endl;
}

// Import songs from file
void SongDB::Import(string filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    getline(file, line); 

    while (getline(file, line)) {
        stringstream ss(line);
        string title, artist, genre, yearStr, playTimeStr;
        int year, playTimeSec;

        getline(ss, title, '\t');
        getline(ss, artist, '\t');
        getline(ss, genre, '\t');
        getline(ss, yearStr, '\t');
        getline(ss, playTimeStr, '\t');

        year = stoi(yearStr);
        playTimeSec = stoi(playTimeStr);

        Add(title, artist, genre, year, playTimeSec);
    }

    cout << "Songs imported successfully." << endl;
}

// Print all songs
void SongDB::PrintAll() const {
    if (size == 0) {
        cout << "No songs in the database." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        songs[i].print();
    }
}

// Print a song by its title
void SongDB::PrintSongByTitle(string title) const {
    for (int i = 0; i < size; i++) {
        if (songs[i].getTitle() == title) {
            songs[i].print();
            return;
        }
    }
    cout << "Song not found." << endl;
}


