#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int
main()
{
	int i;
	for(i = 0; i<2;++i)
	{
		fork();
		printf("-");
		fflush(stdout);
	}
	return 0;
}
