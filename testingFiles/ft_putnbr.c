void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar((num % 10) + '0');
}