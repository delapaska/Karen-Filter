//
// Created by andrey on 15.01.2022.
//

#ifndef CMAKE_BUILD_DEBUG_UNTITLED_KAREN_FILTER_H
#define CMAKE_BUILD_DEBUG_UNTITLED_KAREN_FILTER_H
#pragma once
#include <iostream>
#include <cstdlib>
   /*
enum strings {
    debug,
    info,
    warning,
    error,
    wrong
};
    */
class Karen{
private:
    std::string funname;
    void debug();
    void info();
    void warning();
    void error();



public:

  //  strings retur (std::string const &funstr);
    const std::string &getFunName() const;
    void setFunName(const std::string &name);
    void complain(std::string level);




};
#endif //CMAKE_BUILD_DEBUG_UNTITLED_KAREN_FILTER_H
