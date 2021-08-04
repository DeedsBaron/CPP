#include <iostream>
#include <fstream>

int		disp_error(const char *str)
{
	std::cout << "\033[0;31m" << str << std::endl;
	return (1);
}

int 	handle_getline_errors(std::ifstream & file)
{
	if (file.bad())
		return (disp_error("Format error"));
	else
		return (0);
}

std::string	make_new_string(std::string line, std::string find, std::string replace, size_t insert_pos)
{
	insert_pos = line.find(find, insert_pos);
	if (insert_pos == std::string::npos)
		return (line);
	line.erase(insert_pos, find.length());
	line.insert(insert_pos, replace);
	return (make_new_string(line, find, replace, insert_pos));
}

int main(int argc,char *argv[])
{
	if (argc != 4)
		return (disp_error("Wrong number of args"));
	std::ifstream file(argv[1], std::ifstream::in);
	if (!file.is_open())
		return (disp_error("Can't open the file"));
	std::string con(".replace");
	std::ofstream out(argv[1] + con, std::ifstream::out);
	std::string line;
	std::string find(argv[2]);
	std::string replace(argv[3]);
	if (!out.is_open())
		return (disp_error("Can't init the file"));
	while (std::getline(file, line))
	{
		if (handle_getline_errors(file))
			return (1);
		out << make_new_string(line, find, replace, 0);
		if (file.eof())
			return(0);
		out << std::endl;
	}
	return (0);
}