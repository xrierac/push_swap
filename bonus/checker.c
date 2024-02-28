int main(int argc, char *argv[])
{
	t_stack sta;
	t_stack stb;

	if (argc == 1)
		return (0);
	sta.len = get_size(argc, argv);
	if (sta.len > ARRAY_SIZE || sta.len <= 0)
		return (print_error());
	stb.len = 0;
	if (parsing(argc, argv, sta.stack) == -1 || check_error(sta) == -1)
		return (print_error());
	line_checker
}
