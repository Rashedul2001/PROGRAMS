#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    char *genFormStrig = ctime(&now); // it takes a pointer to time_t and returns a pointer to string or string
    printf("%s ", genFormStrig);

    return 0;
}