void	ft_putnbr(int nbr)
{
	int digit;
	int newnbr;
	char c;
	
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	digit = nbr % 10;
	c = digit + '0';
	newnbr = nbr / 10;
	if (newnbr > 0)
	{
		ft_putnbr(newnbr);
	}
	ft_putchar(c);
}
