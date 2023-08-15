#include <stdio.h>

/* This function counts how many times it has been called */
void count_calls()
{
    static int call_count = 0;
    call_count++;
    printf("Number of calls: %d\n", count);
}

int main()
{
    count_calls();
    count_calls();
    count_calls();
    return 0;
}
