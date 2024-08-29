#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_ultstr(char *str)
{
	int i;
	//printf("string original : %s\n" ,str);
	
	i=0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] += 32);
			i++;
		}
		else if(str[i] >= 'a' && str[i]<= 'z')
		{
			ft_putchar(str[i] -= 32);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
		
	}
	ft_putchar('\n');
	//printf("string depois :%s", str);
}

int main(int argc, char **argv)
{	
	if(argc < 2)
	{
		ft_putchar('\n');
		return(0);
	}
	ft_ultstr(argv[1]);
}