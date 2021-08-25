#include "bsq.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (*(s++))
		len++;
	return (len);
}
