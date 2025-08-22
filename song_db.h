#ifndef SONG_DB_H
#define SONG_DB_H
#include <string>
#include "song.h"

const int MAX_SONGS = 200;

class SongDB {
private:
    Song songs[MAX_SONGS];
    int size;

public:
    SongDB();  // Constructor

    void Add(std::string title, std::string artist, std::string genre, int year, int playTimeSec);
    void DeleteAll();
    void Import(std::string filename);
    void PrintAll() const;
    void PrintSongByTitle(std::string title) const;
};

#endif




