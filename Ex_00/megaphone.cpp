#include <iostream>
#include <cstring>

int   main(int argc, char** argv)
{
    int j;
    int i;
    int l;


    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        for (j = 1; j <= (argc - 1); j++)
        {
            std::string str (argv[j]);
            l = str.size();
            for (i = 0; i <= l; i++)
                std::cout << (char)toupper(argv[j][i]);
        }
        std::cout << std::endl;
        return 0;
    }
    return 0;
}