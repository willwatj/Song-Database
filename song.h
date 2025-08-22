#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    string genre;
    int year;
    int playTimeSec;

public:
    Song();  // Default constructor
    Song(string title, string artist, string genre, int year, int playTimeSec);
    
    string getTitle() const;
    void print() const;
};

#endif





