#include "ShrubberyCreationForm.hpp"
#include  <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137),
 target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	(void)src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	try
	{
		std::ofstream outFile((this->target + "_shrubbery").c_str());

		outFile << "                              _                   " << std::endl;
		outFile << "                           ,--.\\`-. __           " << std::endl;
		outFile << "                        _,.`. \\:/,  -._        " << std::endl;
		outFile << "                    ,-* _,.-;-*-.+*._ )        " << std::endl;
		outFile << "                   ( ,.* ,- / `.  \\.  `.        " << std::endl;
		outFile << "                 ,{   ,;  ,\\../\\  \\:   \\        " << std::endl;
		outFile << "                 (   ,/   / \\.,' :   ))  /       " << std::endl;
		outFile << "                  \\  |/   / \\.,'  /  / ,'        " << std::endl;
		outFile << "                   \\_)\\ ,' \\.,'  (  / )/          " << std::endl;
		outFile << "                      `  \\._,'                    " << std::endl;
		outFile << "                         \\../                     " << std::endl;
		outFile << "                          \\../                    " << std::endl;
		outFile << "                ~        ~\\../           ~~       " << std::endl;
		outFile << "         ~~          ~~   \\../   ~~   ~      ~~   " << std::endl;
		outFile << "    ~~    ~   ~~  __...---\\../-...__ ~~~     ~~   " << std::endl;
		outFile << "      ~~~~  ~_,--'        \\../      `--.__ ~~    ~~ " << std::endl;
		outFile << " ~~~  __,--                            --.__   ~~~ " << std::endl;
		outFile << "~~  ,--'                                         `--. " << std::endl;
		outFile << "  '------......______             ______......------` ~~ " << std::endl;
		outFile << "~~~   ~    ~~      ~ `````--------  ~~   ~     ~~    " << std::endl;
		outFile << "       ~~~~    ~~  ~~~~       ~~~~~~  ~ ~~   ~~ ~~~  ~ " << std::endl;
		outFile << "   ~~   ~   ~~~     ~~~ ~         ~~       ~~        " << std::endl;
		outFile << "             ~        ~~       ~~~       ~           " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Openning output file failed" << std::endl;
		return;
	}
}
