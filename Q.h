//
// Created by danai on 9/20/18.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
#ifndef AAD_2_LAB03_Q_H
#define AAD_2_LAB03_Q_H


class Q {
    int n, *a;
public:
    Q();
    Q(int nn);
    Q(int nn, int *aa);

    void user_input();
    void print();
    int search();

    int getN() const;
};


#endif //AAD_2_LAB03_Q_H
