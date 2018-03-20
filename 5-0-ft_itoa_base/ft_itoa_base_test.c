#include <stdlib.h>
#include <stdio.h>

char    *ft_string(char *ptr)
{
    int     i;
    char    *str;
    
    i = 0;
    while (ptr[i])
        i++;
    str = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (ptr[i])
    {
        str[i] = ptr[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char	*ft_itoa_base(int value, int base)
{
    char        buff[50];
    char        arr[] = "0123456789ABCDEF";
    char        *str;
    long int    val;
    int         neg;
    
    str = &buff[50];
    *str = '\0';
    val = value;
    neg = 0;
    if (base < 0 || base > 16)
        return(0);
    if (val < 0)
    {
        n = 1;
        val = val * -1;
    }
    if (val == 0)
    {
        str--;
        *str = '0';
    }
    while (val > 0)
    {
        str--;
        *str = arr[val % base];
        val = val / base;
    }
    if (base == 10 && neg == 1)
    {
        str--;
        *str = '-';
    }
    return(ft_string(str));
}

int main()
{
    printf("%s\n", ft_itoa_base(1234567, 16));
    printf("%X\n", 1234567);
    return(0);
}