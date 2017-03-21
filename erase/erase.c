#include <stdio.h>
#include <string.h>

main()
{
	int n;
	scanf("%d", &n);
	char input[1000], output[1000];
	scanf("%s", &input);
	scanf("%s", &output);
	int compare = strcmp(input,output);
	if(n%2 == 0){
		if(!compare)
			printf("Deletion succeeded");
		else
			printf("Deletion failed");
	}
	else
	{
		for(int i = 0; i < strlen(input); ++i)
			if(input[i] == output[i])
			{
				printf("Deletion failed");
				return 0;
			}
		printf("Deletion succeeded");
	}
    return 0;
}