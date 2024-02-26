#include "funtions.h"
#include <iostream>

namespace mapFuntions {
    void funtions::drawMap(const dimensions tam) {

        for (int i = 0; i < tam.x; i++) {
            for (int k = 0; k < tam.y; k++) {

                cout << "# ";

            }
            cout << "\n";
        }


    }

    map funtions::initialization() {

        int aux_x, aux_y;

        cout << "What will be the size of the map? \n" << "X coords?: ";
        cin >> aux_x;
        cout << "Y coords?: ";
        cin >> aux_y;
        cout << "\n\n";

        map mapData(aux_x, aux_y);


        return mapData;
    }

    

}