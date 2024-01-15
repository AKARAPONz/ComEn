#include <iostream>

void go(int ***p, int **z);

int main() {
    int *b = new int;
    *b = 10;
    int *c = new int;
    *c = 20;
    int **a;
    go(&a, &b);
    std::cout << **a << " " << *a << " " << a << " " << &a << std::endl;
    go(&a, &c);
    std::cout << **a << " " << *a << " " << a << " " << &a << std::endl;

    // Don't forget to free the allocated memory
    delete b;
    delete c;
    delete a;

    return 0;
}

void go(int ***p, int **z) {
    *p = new int*;  // Allocate memory for a pointer to a pointer
    **p = *z;       // Assign the value of z to the memory location pointed to by p
}

