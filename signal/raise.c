#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

/* 
raise函数向自身进程发送一个SIGABRT信号.使进程非正常结束.
这不就是自杀吗?
 */


int
main()
{
	printf("Hello, I like linux c\n");
	if( raise(SIGABRT) == -1 )
	{
		printf("raise failed\n");
		exit(1);
	}

	printf("Hello again\n");//进程非正常结束,此句不会执行
	return 0;
}



