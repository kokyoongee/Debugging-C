#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd1;
	fd1 = open("/home/ky/Debugging_C_Program/get_next_line/test.txt", O_RDONLY);
	line = (char*)1;
	while (line != NULL)
	{
		line = get_next_line(fd1);
		printf("%s",line);
		free(line);
	}
	close(fd1);
	return (0);
}
