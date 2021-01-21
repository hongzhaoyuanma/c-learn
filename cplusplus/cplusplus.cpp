#pragma once
#include <iostream>
export module helloworld;  // module declaration
import <iostream>;         // import declaration

export void hello() {      // export declaration
    std::cout << "Hello world!\n" << std::endl;
}

import helloworld;
int main()
{
    //std::cout << "Hello World!" <<std::endl;
    hello();
    return 0;
}

