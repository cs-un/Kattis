#include <stdio.h>

main()
{
	int T;
	scanf("%d", &T);
	while(T-->0)
	{
		int n;
		scanf("%d", &n);
		int max = 0, candidate, tie = 0, total = 0;
		for(int i = 0; i < n; ++i)
		{
			int votes;
			scanf("%d", &votes);
			total+=votes;
			if(votes > max)
			{
				max = votes;
				candidate = i + 1;
				tie = 0;
			}
			else if(votes == max)
				tie = 1;
		}
		if(tie)
			printf("no winner\n");
		else
			printf("%s winner %d\n", (max > total/2 ? "majority" : "minority"),candidate);
	}
    return 0;
}