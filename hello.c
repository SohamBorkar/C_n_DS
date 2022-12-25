#include <stdio.h>

int random()
{
    int h = (rand() % (5 - 1 + 1)) + 1;
    return h;
}

int main()
{
    // int h = (rand()%(5 - 1 + 1)) + 1;
    // char e = 'd';

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", random());
    }

    return 0;
}
