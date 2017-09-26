#include <stdio.h>

main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if(x < 0)
		printf("%d", y < 0 ? 3 : 2);
	else
		printf("%d", y < 0 ? 4 : 1);
	return 0;
}