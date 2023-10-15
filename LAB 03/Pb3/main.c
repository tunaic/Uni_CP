#include <stdio.h>
#include <math.h>
// 3. Rezolvati o ecuatie de gradul 2: ax^2+bx+c = 0, se trateaza toate cazurile speciale si radacinile complexe.
int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double d = b * b - 4 * a * c;

    if(d > 0){
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        printf("Ecuatia are doua solutii: x1 = %.2lf si x2 = %.2lf.\n", x1, x2);
    }

    else if(d == 0){
        double x = -b / (2 * a);
        printf("Ecuatia are o singura solutie: x = %.2lf\n", x);
    }

    else if(d < 0){
        double parte_reala = -b / (2 * a);
        double parte_img = sqrt(-d) / (2 * a);
        printf("Ecuatia are doua radacini complexe conjugate: x1 = %.2lf + %.2lfi si x2 = %.2lf - %.2lfi.", parte_reala, parte_img, parte_reala, parte_img);
    }
    return 0;
}
