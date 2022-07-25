#include "push_swap.h"

int	*init_arr(char **strs, int ac)
{
	int	*arr;

	arr = ft_calloc(1, sizeof(int) * ac);
	if (arr == 0)
		ft_error(strs);
	return (arr);
}

int	*ft_adtoi(int i, char **strs, int ac)
{
	long long	num;
	int			j;
	int			sign;
	int			*arr;

	arr = init_arr(strs, ac);
	while (strs[i])
	{
		num = 0;
		sign = 1;
		j = check_sign(strs[i][j], strs[i][j + 1], &sign);
		while (strs[i][j])
		{
			if (!(strs[i][j] >= '0' && strs[i][j] <= '9'))
				ft_error(strs);
			num += num * 10 + strs[i][j++] - '0';
		}
		if ((num > MAX && sign == 1) || (sign == -1 && num * sign < MIN))
			ft_error(strs);
		arr[i] = sign * num;
		if (is_dup(arr, i++))
			ft_error(strs);
	}
	return (arr);
}