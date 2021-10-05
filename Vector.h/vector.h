#include<stdio.h>
#include<math.h>

typedef struct vector
{
    double x;
    double y;
    double z;
} vector;

void print_vector(vector const *v)
{
    double x = v->x, y = v->y, z = v->z;
    printf("<%.2f, %.2f, %.2f>\n", x, y, z);
}

double vector_length(vector const *v)
{
    double x = v->x, y = v->y, z = v->z;
    return sqrt(x*x + y*y + z*z);
}

vector add_vector(vector const *v1, vector const *v2)
{
    vector v;

    v.x = v1->x + v2->x;
    v.y = v1->y + v2->y;
    v.z = v1->z + v2->z;

    return v;
}

double dot(vector const *v1, vector const *v2)
{
    double x, y, z;

    x = (v1->x)*(v2->x);
    y = (v1->y)*(v2->y);
    z = (v1->z)*(v2->z);

    return x+y+z;
}

vector cross(vector const *v1, vector const *v2)
{
    vector v;

    v.x = (v1->y)*(v2->z) - (v1->z)*(v2->y);
    v.y = (v1->z)*(v2->x) - (v1->x)*(v2->z);
    v.z = (v1->x)*(v2->y) - (v1->y)*(v2->x);

    return v;
}
