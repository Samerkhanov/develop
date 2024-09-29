#include <stdio.h>

int fac(int a);
double eiler(int a);

int main() {
    printf("%.5lf\n", eiler(4));
    printf("%.5lf\n", eiler(5));
    printf("%.5lf\n", eiler(6));
    return 0;
}

int fac(int a){
    int result = 1;
    for (int i = 1; i <= a; i++)
        result = result * i;
    return result;
}

double eiler(int a){
    double result = 1;
    for (int i = 1; i < a; i++){
        printf("%d ", i);
        // printf("(%f) ", 1 / fac(i));
        result = result + 1 / (double)fac(i);
    }
    return result;
}