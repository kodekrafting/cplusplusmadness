//kodekrafting 2016

#include <stdio.h>

#define starting_point 0

int happiness = starting_point;

int main()
{
    int * exploring_the_unknown = &happiness;
    if (exploring_the_unknown)
        happiness++;
}
