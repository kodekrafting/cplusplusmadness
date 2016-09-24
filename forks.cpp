#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define choices 4
#define adventure 0

pid_t directions[choices];

void go_somewhere_new()
{
    printf("-\n");
}

int main()
{
    for (int choice = adventure; choice < choices; choice++) {
        if (directions[choice] = fork() == adventure) {
    	    go_somewhere_new();
    		exit(adventure);
    	}
    }
}

