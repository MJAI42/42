#include <unistd.h>

int     ft_str_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (0);
}

int     ft_check_base (char *base)
{
    int len_base;
    int i;
    int j;

    len_base = ft_str_len(base);
    i = 0;
    if (len_base < 2)
        return(0);
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
            return(0);
        else
            i++;
    }
    i = 0;
    while (base[i] != '\0')
    {
        j = 1;
        while (base[i + j] != '\0')
        {
            if(base[i] == base[i + j])
                return(0);
            else
                j++;
        }
        i++;
    }
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     len_base;


    if (ft_check_base(base) != 0)
    {
        len_base = ft_str_len(base);
        

    }
    
}

int main(void)
{
    int     nbr;
    char    *base;

    nbr = 0123456789;
    base = "0123456789ABCDEF";

    ft_putnbr_base(nbr, base);
}