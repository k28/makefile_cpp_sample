
#ifndef __POCO__TEST__
#define __POCO__TEST__


#include <iostream>
#include <string>

#include "Poco/Format.h"
#include "./test/hoge.h"

int main(int argc, char * argv[]) {
    hoge::Hoge test;
    std::string hoge = Poco::format("%s %d",test.hello(), 12);
    std::cout << hoge << std::endl;
}

#endif

