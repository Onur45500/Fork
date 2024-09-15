
/* fork.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	FILE *fd;
	int x;
	
	x = fork();
	while(1)
	{
		printf("%d\n", x);
		fd = fopen("test.txt", "a");
		fprintf(fd, "%d\n", x);
		fclose(fd);
		sleep(1);
	}

	return 0;
}
