#include "get_next_line.h"

int main (void)
{
	char *line;
	int	fd;
	
	//fd = open("3.txt", O_RDONLY);
	//fd = open("test1.txt", O_RDONLY);
	fd = open("hugo.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	free(line);
	close(fd);
	return (0);
}
