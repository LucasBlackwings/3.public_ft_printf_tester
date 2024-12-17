/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahlsweh <lahlsweh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:41:22 by lahlsweh          #+#    #+#             */
/*   Updated: 2024/12/17 11:42:03 by lahlsweh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	double	test1 = 3.14;
	char	var1 = 'Z';
	char	*var2 = "World";
	char	*var3 = NULL;
	int		var4 = INT_MAX;
	int		var5 = INT_MIN;
	int		var6 = UINT_MAX;
	int		var7 = 0;
	int		var8 = 42;
	int		var9 = -42;
	int		*var10 = NULL;
	double	*var11 = NULL;
	char	*var12 = NULL;
	int		*var13 = &var8;
	double	*var14 = &test1;
	char	*var15 = &var1;
	int		var16 = 6541098;
	int		var17 = 4506540;

	printf("|| %d\n",      printf("Hello, World!"));
	printf("|| %d\n\n", ft_printf("Hello, World!"));
	printf("|| %d\n",      printf("%%"));
	printf("|| %d\n\n", ft_printf("%%"));
	printf("|| %d\n",      printf("100%%"));
	printf("|| %d\n\n", ft_printf("100%%"));
	printf("|| %d\n",      printf("ABC%%%%DEF"));
	printf("|| %d\n\n", ft_printf("ABC%%%%DEF"));
	printf("|| %d\n",      printf("%c", 'A'));
	printf("|| %d\n\n", ft_printf("%c", 'A'));
	printf("|| %d\n",      printf("%c", var1));
	printf("|| %d\n\n", ft_printf("%c", var1));
	printf("|| %d\n",      printf("%c", '\150'));
	printf("|| %d\n\n", ft_printf("%c", '\150'));
	printf("|| %d\n",      printf("%s", "Hello"));
	printf("|| %d\n\n", ft_printf("%s", "Hello"));
	printf("|| %d\n",      printf("%s", var2));
	printf("|| %d\n\n", ft_printf("%s", var2));
	printf("|| %d\n",      printf("%s", var3));
	printf("|| %d\n\n", ft_printf("%s", var3));
	printf("|| %d\n",      printf("%s", "\150\160\170\200\210\220\230\240\250"));
	printf("|| %d\n\n", ft_printf("%s", "\150\160\170\200\210\220\230\240\250"));
	printf("|| %d\n",      printf("%d | %d | %d | %d | %d | %d | %d", var4, var5, var7, var8, var9, var16, var17));
	printf("|| %d\n\n", ft_printf("%d | %d | %d | %d | %d | %d | %d", var4, var5, var7, var8, var9, var16, var17));
	printf("|| %d\n",      printf("%i | %i | %i | %i | %i | %i | %i", var4, var5, var7, var8, var9, var16, var17));
	printf("|| %d\n\n", ft_printf("%i | %i | %i | %i | %i | %i | %i", var4, var5, var7, var8, var9, var16, var17));
	printf("|| %d\n",      printf("%u | %u | %u | %u | %u | %u | %u", var4, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n\n", ft_printf("%u | %u | %u | %u | %u | %u | %u", var4, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n",      printf("%x | %x | %x | %x | %x | %x | %x | %x", var4, var5, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n\n", ft_printf("%x | %x | %x | %x | %x | %x | %x | %x", var4, var5, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n",      printf("%X | %X | %X | %X | %X | %X | %X | %X", var4, var5, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n\n", ft_printf("%X | %X | %X | %X | %X | %X | %X | %X", var4, var5, var6, var7, var8, var9, var16, var17));
	printf("|| %d\n",      printf("%% A %%%% B %c C %s D %d E %i F %u G %x H %X I %p J \177\200\201\202\203\204\205\206\207\210", var1, var2, var4, var5, var6, var16, var17, var13));
	printf("|| %d\n\n", ft_printf("%% A %%%% B %c C %s D %d E %i F %u G %x H %X I %p J \177\200\201\202\203\204\205\206\207\210", var1, var2, var4, var5, var6, var16, var17, var13));
	printf("|| %d\n",      printf("%% A %%%% B %c C %s D %d E %i F %u G %x H %X I %p J \177\200\201\202\203\204\205\206\207\210", var1, var12, var4, var5, var6, var8, var9, var11));
	printf("|| %d\n\n", ft_printf("%% A %%%% B %c C %s D %d E %i F %u G %x H %X I %p J \177\200\201\202\203\204\205\206\207\210", var1, var12, var4, var5, var6, var8, var9, var11));
	printf("|| %d\n",      printf("%p %p %p %p %p %p", var10, var11, var12, var13, var14, var15));
	printf("|| %d\n\n", ft_printf("%p %p %p %p %p %p", var10, var11, var12, var13, var14, var15));
	printf("|| %d\n",      printf("%p", (void *)-1));
	printf("|| %d\n\n", ft_printf("%p", (void *)-1));
	printf("|| %d\n",      printf("%p", (void *)1));
	printf("|| %d\n\n", ft_printf("%p", (void *)1));
	printf("|| %d\n",      printf("%p", (void *)15));
	printf("|| %d\n\n", ft_printf("%p", (void *)15));
	printf("|| %d\n",      printf("%p", (void *)16));
	printf("|| %d\n\n", ft_printf("%p", (void *)16));
	printf("|| %d\n",      printf("%p", (void *)17));
	printf("|| %d\n\n", ft_printf("%p", (void *)17));
	printf("|| %d\n",      printf("%p %p", (void *)LONG_MIN, (void *)LONG_MAX));
	printf("|| %d\n\n", ft_printf("%p %p", (void *)LONG_MIN, (void *)LONG_MAX));
	printf("|| %d\n",      printf("%p %p", (void *)INT_MIN, (void *)INT_MAX));
	printf("|| %d\n\n", ft_printf("%p %p", (void *)INT_MIN, (void *)INT_MAX));
	printf("|| %d\n",      printf("%p %p", (void *)ULONG_MAX, (void *)-ULONG_MAX));
	printf("|| %d\n\n", ft_printf("%p %p", (void *)ULONG_MAX, (void *)-ULONG_MAX));
	printf("|| %d\n",      printf("%p", (void *)0xffffffffffffffff));
	printf("|| %d\n\n", ft_printf("%p", (void *)0xffffffffffffffff));
	printf("|| %d\n",      printf("%p", (void *)0xefffffffffffffff));
	printf("|| %d\n\n", ft_printf("%p", (void *)0xefffffffffffffff));
	printf("|| %d\n",      printf("%p", (void *)0));
	printf("|| %d\n\n", ft_printf("%p", (void *)0));
	printf("|| %d\n",      printf(NULL));
	printf("|| %d\n\n",    ft_printf(NULL));
	printf("|| %d\n",      printf("%d", NULL));
	printf("|| %d\n\n",    ft_printf("%d", NULL));
	printf("|| %d\n",      printf("%c %d %d", 2));
	printf("|| %d\n\n",    ft_printf("%c %d %d", 2));
	return (0);
}

