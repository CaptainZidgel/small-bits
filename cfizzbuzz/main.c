#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int it;
    for (it = 1; it <= 45; it++)
    {
        if (it % 3 == 0) {
            if (it % 5 == 0) {
                printf("FizzBuzz, %i\n", it);
            } else {
                printf("Fizz, %i\n", it);
            }
        }
        else if (it % 5 == 0) {
            printf("Buzz, %i\n", it);
        } else {
            printf("%i\n", it);
        }
    }
    return 0;
}
