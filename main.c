#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char *p = "\nghh%Mghn%";
    int i=ft_printf(p,12);
    int ii =printf(p,12);
    printf("\n{%d} {%d} ", i ,ii);
}