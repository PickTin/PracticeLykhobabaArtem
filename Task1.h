#ifndef TASK1_H
#define TASK1_H

#include <iostream>
using namespace std;

class B1 {
    int b1;
public:
    B1(int x) : b1(x) {}
    void show_B() { cout << "B1= " << b1 << "\n"; }
};

class B2 {
    int b2;
public:
    B2(int x) : b2(x) {}
    void show_B() { cout << "B2= " << b2 << "\n"; }
};

class D1 : public B1 {
    int d1;
public:
    D1(int x, int y) : B1(y), d1(x) {}
    void show_D1() { cout << "D1= " << d1 << "\n"; show_B(); }
};

class D2 : private D1, private B2 {
    int d2;
public:
    D2(int x, int y, int z) : D1(y, z), B2(z), d2(x) {}
    void show_D2() { cout << "D2= " << d2 << "\n"; D1::show_D1(); B2::show_B(); }
};

class D3 : public D2 {
    int d3;
public:
    D3(int x, int y, int z, int i, int j) : D2(y, z, i), d3(x) {}
    void show_D3() { cout << "D3= " << d3 << "\n"; D2::show_D2(); }
};

class D4 : public D1, public B2 {
    int d4;
public:
    D4(int x, int y, int z, int i, int j) : D1(y, z), B2(i), d4(x) {}
    void show_D4() { cout << "D4= " << d4 << "\n"; D1::show_D1(); B2::show_B(); }
};

#endif // TASK1_H
