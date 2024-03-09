#include "math.h"

float pow(float f, int c)
{
    int i;
    float r = 1;
    for (i = 0; i < c; i++)
    {
        r = r * f;
    }
    return r;
}



float ln(float f)
{
    return (f > 1) ? 1 + ln(f / 2) : 0;
}
