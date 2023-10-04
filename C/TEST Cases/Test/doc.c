// #include <errno.h>
// #include <stdio.h>
// #include <string.h> //if there is no this it won't work properly.
// // just writng because I really dont understant this

// int main(int argc, char *argv[])
// {
//     FILE *fp;

//     fp = fopen(argv[1], "r");
//     if (fp == NULL)
//     {
//         fprintf(stderr, "%s\n", strerror(errno));
//         return errno;
//     }

//     printf("file exist\n");

//     fclose(fp);

//     return 0;
// }



#include <stdio.h>   // this will work on 32-bit platforms
 
int main(void)
{
    int *p = malloc(sizeof(int));
 
    if (p == NULL) {
        perror("malloc()");
        return -1;
    }
 
    *p = 10;
    free(p);
 
    return 0;
}