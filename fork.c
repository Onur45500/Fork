
/* fork.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
	FILE *fd;
	int x;
	
	x = 5;
	while(1)
	{
		fd = fopen("test.txt", "a");
		fprintf(fd, "%d\n", x);
		fclose(fd);
		sleep(1);
	}

	return 0;
}
