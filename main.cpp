//
// created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 48
 * Дан целочисленный массив размера N. Найти максимальное количество его
 * одинаковых элементов.
 */

int main() {
    cout << "нахождение макчимального количества одинаковых элементов массива" << endl;
    Q *z;
    int nn, *res;
    cout << "введите кол-во массивов(NN): ";
    cin >> nn;
    while (nn <= 0) {
        cout << "введите положительное кол-во массивов(N)" << endl;;
        cin >> nn;
    }
    z = new Q[nn];
    res = new int[nn];
    for (int i = 0; i < nn; ++i) {
        cout << "заполните " << i << " массив" << endl;
        z[i].user_input();
        z[i].print();
        res[i] = z[i].search();
    }
    for (int i = 0; i < nn; ++i) {
        cout << "макчимального количества одинаковых элементов  " << i << "-го массива равно " << res[i] << endl;
    }
    return 0;
}