#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstdlib>
 
std::string pwd()
{
    std::string env_p(std::getenv("PWD"));
    std::cout << env_p;
    return (env_p + "/");
}
std::string upper(std::string a)
{
    int i =0;
    std::string ret;

    while(i < a.length())
        ret += (char)toupper(a[i++]);
    return ret;
}
int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    std::ifstream ifs(av[1]);
    std::string a(av[1]);
    std::stringstream filec;
    std::stringstream fileh;
    filec << pwd() << av[1] << ".cpp";
    fileh << pwd() << av[1] << ".hpp";
    std::ofstream ofs(fileh.str());
    std::ofstream cpp(filec.str());
    ofs << "#ifndef " << upper(a) << "_HPP" << std::endl;
    ofs << "# define " << upper(a) << "_HPP" << std::endl;
    ofs << std::endl << "class " << av[1] << std::endl;
    ofs << "{" << std::endl;
    ofs << "\t" << av[1] << "(void);" << std::endl;
    ofs << "\t" << av[1] << "( " << av[1] << " & c);" << std::endl;
    ofs << "\t" << av[1] << "& operator=( " << av[1] << " & c);" << std::endl;
    ofs << "\t~" << av[1] << "(void);" << std::endl;
    ofs << "};" << std::endl;
    ofs << "#endif" << std::endl;
    cpp << "#include "<< '"' << av[1] << ".hpp" << '"' << std::endl;
    cpp << av[1] << "::" << av[1] << "(void)" << std::endl;
    cpp << "{" << std::endl << "}" << std::endl << std::endl;
    cpp << av[1] << "::" << av[1] << "( " << av[1] << " & c)" << std::endl;
    cpp << "{" << std::endl << "}" << std::endl << std::endl;
    cpp << av[1] << " & " << av[1] << "::" << "operator=( " << av[1] << " & c)" << std::endl;
    cpp << "{" << std::endl << "}" << std::endl << std::endl;
    cpp << av[1] << "::~" << av[1] << "(void)" << std::endl << std::endl;
    cpp << "{" << std::endl << "}" << std::endl;
}