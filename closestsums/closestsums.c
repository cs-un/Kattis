#include <stdio.h>
#include <stdlib.h>

main()
{
	int n;
	int c = 1;
	while(scanf("%d", &n) == 1)
	{
		printf("Case %d:\n", c);
		int nums[n];
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &nums[i]);
		}
		int m;
		scanf("%d", &m);
		for(int i = 0; i < m; ++i)
		{
			int sum, closest = 1000000000;
			scanf("%d", &sum);
			for(int c = 0; c < n; ++c)
			{
				for(int x = c+1; x < n; ++x)
				{
					if(abs((sum - (nums[x] + nums[c]))) < abs(sum - closest))
						closest = nums[x] + nums[c];
				}
			}
			printf("Closest sum to %d is %d.\n", sum, closest);
		}
		++c;
	}
	return 0;
}