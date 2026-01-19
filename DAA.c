// Write a program in c for finding roots in a quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;

    float root1, root2, D;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;
    if(D > 0){
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }
    else if(D == 0){
        root1 = root2 = -b/(2.0*a);
        printf("root1 = root2 = %.2f;", root1);
    }
    else {
        printf("Roots are complex numbers.\n");
    }

    return 0;
}