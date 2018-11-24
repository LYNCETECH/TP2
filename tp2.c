
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *upper(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {

        s[i] -= 32;
    }

    return s;
}

char *get_first_arg(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

void print(char *chaine)
{
    printf("%s", chaine);
}

void step1(char *chaine)
{

    int size = strlen(chaine);
    char tab[2 * size];
    int j = 0;
    while (j < size)
    {
        j++;
        if (j == 1)
        {
            for (int i = 0; i < size; i++)
            {
                tab[size - i] = chaine[i];
                tab[size + i] = chaine[i];
            }
        }
        else
        {
            for (int k = 0; k < j; k++)
            {
                tab[k] = ' ';
                tab[2 * size - k] = ' ';
            }
            for (int i = 0; i < size - j; i++)
            {
                tab[size - i] = chaine[i];
                tab[size + i] = chaine[i];
            }
        }

        printf("%s\n", tab);
    }
}

void fractionate(char **chaine)
{

    int j = 0;

    while (chaine[j] != NULL)
    {
        j++;
    }
    int size = j;

    for (int i = 1; i < size; i++)
    {
        chaine[i][0] -= 32;
        printf("%s\n", chaine[i]);
    }
}

void piramide(char *tab)
{
    step1(tab);
}

int to_int(char *tab)
{
    int size = strlen(tab);
    int value=0;
    for(int i=0;i<size-1;i++){
        value+=tab[i];
    }
    return value;
}
