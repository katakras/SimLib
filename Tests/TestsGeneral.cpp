//
// Created by Luis Huesca Molina on 26/09/2017.
//

#include "TestsGeneral.h"

std::string string_from_result(TEST_RESULTS t)
{
    if(t == FAILED)
    {
        return std::string("FAILED");
    }

    if(t == PASSED)
    {
        return std::string("PASSED");
    }

    throw "ERROR";
}