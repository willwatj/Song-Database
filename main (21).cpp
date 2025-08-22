/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Writted by Will James
#include <iostream>
#include <string>
#include "song_db.h"
using namespace std;

int main() {
    SongDB db;
    int choice = 0;

    cout << "Welcome to My Song Database!" << endl;

    while (choice != 6) {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Add Song" << endl;
        cout << "2. Delete All Songs" << endl;
        cout << "3. Import from File" << endl;
        cout << "4. Print All Songs" << endl;
        cout << "5. Search Song by Title" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cin.ignore();

        string title, artist, filename;
        int year;

        if (choice == 1) {
        cout << "Enter song title: ";
      getline(cin, title);
        cout << "Enter artist name: ";
        getline(cin, artist);
        cout << "Enter genre: ";
        string genre;
        getline(cin, genre);
        cout << "Enter release year: ";
        cin >> year;
        cout << "Enter play time (in seconds): ";
        int playTimeSec;
        cin >> playTimeSec;
        cin.ignore();

        db.Add(title, artist, genre, year, playTimeSec);
    }
        else if (choice == 2) {
            db.DeleteAll();
        }
        else if (choice == 3) {
            cout << "Enter filename to import from: ";
            getline(cin, filename);
            db.Import(filename);
        }
        else if (choice == 4) {
            db.PrintAll();
        }
        else if (choice == 5) {
            cout << "Enter song title to search for: ";
            getline(cin, title);
            db.PrintSongByTitle(title);
        }
        else if (choice == 6) {
            cout << "Thanks for using the Song Database!" << endl;
        }
        else {
            cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
        }
    }

    return 0;
}



