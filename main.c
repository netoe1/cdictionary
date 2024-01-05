#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "dictionary.c"

int main(void)
{
    setlocale(LC_ALL, "");
    Dictionary teste[] = {{"teste1", 1}, {"teste2", 2}};

    return 0;
}