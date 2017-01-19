#include <fstream>
#include <string>
#include <iostream>

template <typename cT, typename Traits>
std::basic_ostream<cT, Traits>&
nl(std::basic_ostream<cT, Traits>& out)
{
    return out << out.widen('\n');
}

int main(int ac, char*[])
{
    std::string   text("0123456789012345678901234567890123456789");
    std::ostream& (*end)(std::ostream&) = std::endl;
    if (ac == 1)
    {
        end = ::nl;
        std::cout<<"using nl"<<'\n';
    }

    std::ofstream out("file.txt", std::ios_base::binary);
    for (size_t i(0); i != 100000; ++i)
    {
        //std::cout << text  <<end;
        out << text  <<end;
    }



}
