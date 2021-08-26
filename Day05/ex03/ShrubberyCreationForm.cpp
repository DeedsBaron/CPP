#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
		Form("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ins) :
		Form(ins) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& right)
{
	if (this == &right)
		return (*this);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::action(void) const
{
	std::ofstream ofs (this->getTarget() + "_shrubbery", std::ofstream::out);
	ofs.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	try
	{
		ofs << "               ,@@@@@@@,\n"
			   "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			   "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			   "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			   "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			   "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			   "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			   "       |o|        | |         | |\n"
			   "       |.|        | |         | |\n"
			   "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"
			   "\n"
			   "------------------------------------------------\n";
		ofs.close();
	}
	catch (std::ofstream::failure& e)
	{
		std::cout << e.what() << std::endl;
		ofs.close();
	}
}

