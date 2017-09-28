//
// Created by Luis Huesca Molina on 26/09/2017.
//

#ifndef SIMLIB_TESTSGENERAL_H
#define SIMLIB_TESTSGENERAL_H

#include<string>

enum TEST_RESULTS
{
    FAILED,
    PASSED
};

std::string string_from_result(TEST_RESULTS);

#endif //SIMLIB_TESTSGENERAL_H
