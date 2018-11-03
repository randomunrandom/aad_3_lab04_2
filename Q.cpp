//
// Created by danai on 9/20/18.
//

#include "Q.h"

int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите количество элементов(N): ";
    cin >> n;
    while (n<=0) {
        cout << "введите положительное количество элементов(N): " ;
        cin >> n;
    }
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i  << " элемент: ";
        cin >> a[i];
    }
}

int Q::search() {
    int *s, max=0;
    s=new int[n];
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; ++j) {
            if(a[i]==a[j]) s[i]++;
        }
    }
    for(int i=0; i<n; i++) {
        if(s[i] > max) {
            max=s[i];
        }
    }
    return max;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}

int Q::getN() const {
    return n;
}