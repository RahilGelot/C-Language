/* 
Calculator with separate functions */
#include <stdio.h>

double add(double a, double b){ return a + b; }
double sub(double a, double b){ return a - b; }
double mul(double a, double b){ return a * b; }
double divide(double a, double b){ return b == 0.0 ? 0.0 : a / b; }

int main(void) {
    double x, y;
    char op;
    printf("Enter expression like: 5 + 3\n");
    if (scanf("%lf %c %lf", &x, &op, &y) != 3) return 0;

    switch (op) {
        case '+': printf("%.6g\n", add(x,y)); break;
        case '-': printf("%.6g\n", sub(x,y)); break;
        case '*': printf("%.6g\n", mul(x,y)); break;
        case '/':
            if (y == 0.0) printf("Division by zero error\n");
            else printf("%.6g\n", divide(x,y));
            break;
        default: printf("Unknown operator\n");
    }
    return 0;
}
