/*
 * update the values of a and b such that
 * a= a+b
 * b = |a-b|
 */
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int p = *a;
    *a = *a + *b;
    *b = p - *b;
    if(*b<0)
        *b = -1 * (*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

