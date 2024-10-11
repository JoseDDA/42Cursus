int main(void)
{
	int	fd;
	char	*line;

	fd = open("file1.txt", O_RDONLY);
	if (fd < 0)
	{
		perror ("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		if (line == NULL)
			printf("NULL CHECK: get next line return NULL unexpectedly.\n");
		else
		{
		printf("Line: %s \n", line);
		free(line);
		}
	}
	if (close(fd) < 0)
	{
		perror("Error closing file");
		return (1);
	}
	return (0);
}
