
int	main(int argc, char *argv[])
{
	int	a_stack[argc];
	int	b_stack[argc];
	int	i;

	i = -1;
	while (++i < (argc - 1))
		a_stack[i] = argv[i + 1];

}
