#include<stdio.h>
#include "vector.h"

int main()
{
    vector v1, v2;
    printf("Enter vector v1:\n");
    scanf("%lf %lf %lf", &v1.x, &v1.y, &v1.z);
    printf("Enter vector v2:\n");
    scanf("%lf %lf %lf", &v2.x, &v2.y, &v2.z);
   
    //test for print_vector():
    print_vector(&v1);
    print_vector(&v2);

    //test for vector_length():
    double l1, l2;
    l1 = vector_length(&v1);
    l2 = vector_length(&v2);
    printf("length of v1 = %.2lf\nlength of vector v2 = %.2lf\n", l1, l2);

    //test for add_vector():
    vector v3 = add_vector(&v1, &v2);
    printf("v1 + v2 = ");
    print_vector(&v3);

    //test for dot()
    double inner_product = dot(&v1, &v2);
    printf("v1.v2 = %.2lf\n", inner_product);

    //test for cross()
    vector v4 = cross(&v1, &v2);
    printf("v1 cross v2 = ");
    print_vector(&v4);

    return 0;
}
