/// This program allows users to manage and interact with a music library. Users can perform various operations
/// such as loading music data from a file, exporting the library to a file, viewing statistics, searching for
/// specific songs or artists, and more. The program uses a map to store albums, where each album contains
/// information about the artists and tracks.
///
/// Assignment details and provided code are created and
/// owned by Adam T Koehler, PhD - Copyright 2023.
/// University of Illinois Chicago - CS 251 Spring 2023

#include <iostream>
#include <string>
#include <fstream> //For export
#include <map>
#include <sstream>
#include <typeinfo> //For typeID

using namespace std;

// INSERTS GIVEN HELPERS CODE BELOW - DO NOT REMOVE
#include "helpers.cpp"
// INSERTS GIVEN HELPERS CODE ABOVE - DO NOT REMOVE

//
// STUDENT CODE MAY GO BELOW THIS LINE
//


struct Album {
    //string albumTitle;
    map<int, string> artists;
    map<int, string> tracks;
    //int numArtists = 0;
};


void load(string fileName,
          map<string, Album>& albums,
          int& numRecords,
          int& numAlbums,
          int& numArtists) {
    ifstream input(fileName);
    if (!input.is_open()) {
        ifstream input("musicdatabase.txt");
    }
    string line, word, albumTitle;
    int index = 0, numArtists = 0, artistIndex = 0;
    istringstream iss(line);
    getline(input, line);
    albumTitle = line;
    while (getline(input, line)) {
        struct Album album
        while (line.compare(albumTitle) != 0) { //no need for this while
         
            if (line.compare(' ') != 0) {
                album.numArtists++;
                album.tracks[artistIndex] = line;
                artistIndex++;
            }
            else {
                album.tracks[index] = line;
                index++;
                numRecords++;
            }
        }
        albums[albumTitle] = album;
        albums.albumTitle = album;
        numAlbums++;
    }
    map<int, string> artistsTemp;
    int temp = 0;
    for (auto i : albums) {
        for (auto j : artists) {
            artistsTemp[temp] = albums.artists[j]
            temp++;
        }
    }
    for (auto a : artistsTemp) {
        int q = 1;
        while (q != a - 1) {
            if (artistTemp[a].compare(artistTemp[b]) == 0) {
                artistTemp.erase[a]
            }
            q--;
        }
    }
}


void stats(map<string, Album>& albums, string command, int numRecords) {
    cout << "Overall Music Library Stats" << endl;
    cout << "===========================" << endl;
    cout << "Total Records: " << numRecords << endl;
    cout << "Total Unique Artists: " << endl;
    cout << "Total Songs: " << endl;
    if (command.compare("-d") == 0) {
        cout << "Your current Music Library Includes" << endl;
        cout << "===================================" << endl;
        for (auto i : albums) {
            cout << albums.albumTitle << endl;
            for (auto j : albums.artists) {
                cout << " " << album.artists[j] << endl;
            }
            for (auto k : album.tracks) {
                cout << "   " << album.tracks[k] << endl;
            }
        }
    }
}


void clear(map<string, Album>& albums) {
    for (auto i : albums) {
        albums.clear(i);
    }
}


void exportFunc(string fileName) {
    ofstream outfile;
    if (fileName.empty()) {
        fileName = "musicdatabase.txt"
    }
    outfile.open(fileName);
    outfile.open("filename.txt", out);
    for (auto i : albums) {
        outfile << albums.albumTitle << endl;
        for (auto j : albums.artists) {
            outfile << " " << album.artists[j] << endl;
        }
        for (auto k : album.tracks) {
            outfile << "   " << album.tracks[k] << endl;
        }
    }
}


void search(string searchTerm, map<string, Album) {
    
}


int main()
{
    string userEntry;
    string command, remains;
    map<string, Album> mapOfAlbums; //Map for search, album name
    int numRecords, numAlbums, numArtists;
    


    // Display welcome message once per program execution
    cout << "Welcome to the Music Library App" << endl;
    cout << "--------------------------------" << endl;

    // Stay in menu until exit command
    do
    {
        cout << endl;
        cout << "Enter a command (help for help): " << endl;
        getline(cin, userEntry);
        cout << endl;

        // Split the user entry into two pieces
        splitFirstWord(userEntry, command, remains);
        tolower(command);
        
        // take an action, one per iteration, based on the command
        if (command == "help")
        {
            helpCommand();
        }
        else if (command == "clear")
        {
            // TODO
        }
        else if (command == "export")
        {
            exportFunc(remains);
        }
        else if (command == "load")
        {
            load(remains, mapOfAlbums, numRecords, numAlbums, numArtists);
        }
        else if (command == "stats")
        {
            stats(mapOfAlbums, remains)
        }          
        else if (command == "search")
        {
            search(remains, mapOfAlbums)
        }

    }while(command != "exit");    

    cout << "Thank you for using the Music Library App" << endl;
    return 0;
}
