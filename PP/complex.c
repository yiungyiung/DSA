#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void addcmp()
{
    int a, b, c, d;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("enter first complex number coefficients c+id");
    scanf("%d%d", &c, &d);
    printf("\nresult is:");
    printf("%d + i%d", a + c, b + d);
}
void subcmp()
{
    int a, b, c, d;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("enter first complex number coefficients c+id");
    scanf("%d%d", &c, &d);
    printf("\nresult is:");
    printf("%d + i%d", a - c, b - d);
}
void mulcmp()
{
    int a, b, c, d;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("enter first complex number coefficients c+id");
    scanf("%d%d", &c, &d);
    printf("\nresult is:");
    printf("%d + i%d", (a * c - b * d), (a * d + b * c));
}
void divcmp()
{
    int a, b, c, d;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("enter first complex number coefficients c+id");
    scanf("%d%d", &c, &d);
    printf("\nresult is:");
    printf("%f + i%f", (float)(a * c + b * d) / (c * c + d * d), (float)(b * c - a * d) / (c * c + d * d));
}
void conjugate()
{
    int a, b;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("\nresult is:");
    printf("%d - i%d", a, b);
}

void mod()
{
    int a, b;
    printf("enter first complex number coefficients a+ib");
    scanf("%d%d", &a, &b);
    printf("\nresult is:");
    printf("%lf", sqrt(a * a + b * b));
}

void main()
{

    while (1)
    {
        printf("\nenter 1: for sum \n2: for difference \n3: for product \n4: for quotient \n5: for conjugate \n6: for modulus \n-1: to exit\n:");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addcmp();
            break;
        case 2:
            subcmp();
            break;
        case 3:
            mulcmp();
            break;
        case 4:
            divcmp();
            break;
        case 5:
            conjugate();
            break;
        case 6:
            mod();
            break;
        case -1:
            exit(1);
            break;
        default:
            printf("INVALID try again\n");
            break;
        }
    }
}