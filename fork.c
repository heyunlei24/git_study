#include <stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
	int ret = 0;
	
	ret = fork();

	if (0 == ret)
	{	
		sleep(5);
		printf("process is child\n");
	} else if (ret < 0) {
		printf("error !\n");
	} else {
		sleep(1);
		printf("process is father\n");
	}
	return 0;
}
