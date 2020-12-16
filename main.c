#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int		main(void)
{
	char *s;
	int	num, ft_num;

	setvbuf(stdout, (char *)NULL, _IONBF, 0);
	/*
	num = printf("%c\n", 'a');
	ft_num = ft_printf("%c\n", 'a');
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%s\n", "42TOKYO");
	ft_num = ft_printf("%s\n", "42TOKYO");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%p\n", &num);
	ft_num = ft_printf("%p\n", &num);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%d\n", 42);
	ft_num = ft_printf("%d\n", 42);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%i\n", 42);
	ft_num = ft_printf("%i\n", 42);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%x\n", 42);
	ft_num = ft_printf("%x\n", 42);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%X\n", 42);
	ft_num = ft_printf("%X\n", 42);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/


	/*
	num = printf("%3s\n", "abcdef");
	ft_num = ft_printf("%3s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%6s\n", "abcdef");
	ft_num = ft_printf("%6s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%10s\n", "abcdef");
	ft_num = ft_printf("%10s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%-3s\n", "abcdef");
	ft_num = ft_printf("%-3s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%-6s\n", "abcdef");
	ft_num = ft_printf("%-6s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%-10s\n", "abcdef");
	ft_num = ft_printf("%-10s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%03s\n", "abcdef");
	ft_num = ft_printf("%03s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%06s\n", "abcdef");
	ft_num = ft_printf("%06s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%010s\n", "abcdef");
	ft_num = ft_printf("%010s\n", "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%*s\n", 3, "abcdef");
	ft_num = ft_printf("%*s\n", 3, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*s\n", 6, "abcdef");
	ft_num = ft_printf("%*s\n", 6, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*s\n", 10, "abcdef");
	ft_num = ft_printf("%*s\n", 10, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%.*s\n", 3, "abcdef");
	ft_num = ft_printf("%.*s\n", 3, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%.*s\n", 6, "abcdef");
	ft_num = ft_printf("%.*s\n", 6, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%.*s\n", 10, "abcdef");
	ft_num = ft_printf("%.*s\n", 10, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%*.*s\n", 3, 3, "abcdef");
	ft_num = ft_printf("%*.*s\n", 3, 3, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 6, 3, "abcdef");
	ft_num = ft_printf("%*.*s\n", 6, 3, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 10, 3, "abcdef");
	ft_num = ft_printf("%*.*s\n", 10, 3, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%*.*s\n", 3, 6, "abcdef");
	ft_num = ft_printf("%*.*s\n", 3, 6, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 6, 6, "abcdef");
	ft_num = ft_printf("%*.*s\n", 6, 6, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 10, 6, "abcdef");
	ft_num = ft_printf("%*.*s\n", 10, 6, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	/*
	num = printf("%*.*s\n", 3, 10, "abcdef");
	ft_num = ft_printf("%*.*s\n", 3, 10, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 6, 10, "abcdef");
	ft_num = ft_printf("%*.*s\n", 6, 10, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*.*s\n", 10, 10, "abcdef");
	ft_num = ft_printf("%*.*s\n", 10, 10, "abcdef");
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	*/

	//test crazy
	/*
	num = printf("%.0d\n", 0);
	ft_num = ft_printf("%.0d\n", 0);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%5.0d\n", 0);
	ft_num = ft_printf("%5.0d\n", 0);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%*d\n", INT_MAX, 42);
	ft_num = ft_printf("%*d\n", INT_MAX, 42);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%21.18p\n", &num);
	ft_num = ft_printf("%21.18p\n", &num);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%-21.18p\n", &num);
	ft_num = ft_printf("%-21.18p\n", &num);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%021.18p\n", &num);
	ft_num = ft_printf("%021.18p\n", &num);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
	num = printf("%-021.18p\n", &num);
	ft_num = ft_printf("%-021.18p\n", &num);
	printf("printf : %d\nft_printf : %d\n", num, ft_num);
*/
//	system("leaks a.out");

	return (0);
}
