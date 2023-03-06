#include <unistd.h>

void	p_c(int nb)
{
	char a;

	a = (nb % 10) + '0';
	if (nb / 10 != 0)
	{
		p_c(nb / 10);
	}
	write(1, &a, 1);
}

void	m_c(int nb)
{
	char a;

	a = -1 * (nb % 10) + '0';
	if (nb / 10 != 0)
	{
		m_c(nb / 10);
	}
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		p_c(nb);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		m_c(nb);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
}

int main()
{
	ft_putnbr(42);
}