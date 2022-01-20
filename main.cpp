#include <iostream>
#include <cstdlib>
#include "Karen-Filter.h"


int main (int argc, char** argv){
    Karen kar;
  if (argc == 1){
        std::cout << "wrong" << std::endl;
      return 0;
    }
    char *buf;
    for (size_t i = 1; i < (size_t)argc;i++){
        buf = argv[i];
    }
    std::string argument = std::string(buf);
    kar.setFunName(argument);
    kar.complain(kar.getFunName());


}



