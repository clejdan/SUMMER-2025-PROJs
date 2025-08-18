#include <stdio.h>

int main() {

    int n = 50;
    int *p = &n; // reads, wherever "n" is, get the address of it, and assign it to p 
    printf("%i\n", *p); // dereference p to get the value of n, in most cases it is more useful to dereference a pointer

}