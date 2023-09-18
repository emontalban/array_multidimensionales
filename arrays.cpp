#include <iostream>
using namespace std;

int main()  {
    int pasoCoche[24][31][12];

    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 31; j++) {
            for (int k = 0; k < 12; k++) {
                // rand genera numeros aleatorios entre 0 y 1000
                // para que se inicialice desde otro numero que no sea 0
                // seria  5 +rand() % 100
                pasoCoche[i][j][k] = rand() % 1000;
            }
        }
    }
    cout << "El numero de coches que pasaron el 29 de mayo a las 19:00 fueron: " << pasoCoche[18][28][4] << endl;
}
