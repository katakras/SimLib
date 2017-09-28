#include <iostream>

#include "Tests/GraphTests.h"
#include "Tests/TestsGeneral.h"

int main(int argc, char* argv[])
{
    if(argc == 1)
    {
        std::cout << "No arguments were passed!" << std::endl;
        std::cout << "Name: " << argv[0] << std::endl;
    }


     if(std::string(argv[1]) == "-test")
    {
        if(test_graphs())
        {
            std::cout << "test_graphs" << " " << string_from_result(TEST_RESULTS::PASSED) << std::endl;
        }
        else
        {
            std::cout << "test_graphs" << " " << string_from_result(TEST_RESULTS::FAILED) << std::endl;
        }
    }



    return 0;
}