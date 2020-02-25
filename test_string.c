#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int		match(char *s1, char *s2);

#define SIZE 10

int     main(void)
{
    time_t  t;
    srand((unsigned) time(&t));
    char    *str_one = (char *)malloc(sizeof(char) * SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        int pos = rand() % 26;
        str_one[i] = pos + 65;
    }
    str_one[SIZE/2 -1] = '*';
    char    *str_one_clone = strdup(str_one); 
    str_one_clone[SIZE - 1] = '/';

    char    *str_two = (char *)malloc(sizeof(char) * SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        int pos = rand() % 26;
        str_two[i] = pos + 65;
    }
    printf("%s\n", str_one);
    printf("%s\n", str_one_clone);
    printf("%d\n", strcmp(str_one, str_one_clone));
    printf("%d\n", match(str_one, str_one_clone));
    printf("%d\n", match(str_one, str_two));
    free(str_one);
    free(str_one_clone);
    free(str_two);
    return (0);
}
