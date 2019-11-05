void	ft_putchar(char c);

void	ft_putstr(char *str1)
{
	while (*str1)
	{
		ft_putchar(*str1);
		str1++;
	}
}