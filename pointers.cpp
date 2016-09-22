#kodekrafting 2016

#include <stdio.h>

#define starting_point 0

int happiness = starting_point;

void spend_time(int * direction) {
    direction = &happiness;
}

int main()
{
    int * exploring_the_unknown = NULL;
    spend_time(exploring_the_unknown);
    if (&exploring_the_unknown) {
        happiness++;
    }
}
