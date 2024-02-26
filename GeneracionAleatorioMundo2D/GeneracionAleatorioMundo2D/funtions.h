#pragma once

#include <random>
#include <chrono>

using namespace std;


namespace mapFuntions {

	struct dimensions {
		int x;
		int y;
	};

	struct map {
        dimensions dim;
        char** mapData;

        // Constructor to initialize the map and allocate memory
        map(int x, int y) {
            dim.x = x;
            dim.y = y;
            mapData = new char* [dim.x];
            for (int i = 0; i < dim.x; ++i) {
                mapData[i] = new char[dim.y];
            }
        }

        // Destructor to deallocate memory
        ~map() {
            for (int i = 0; i < dim.x; ++i) {
                delete[] mapData[i];
            }
            delete[] mapData;
        }

	};
	class funtions
	{
	public:


		static void drawMap(const dimensions tam);
		static map initialization();
		static void insertRooms();

	};
	
	
}

