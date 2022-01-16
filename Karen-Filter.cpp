//
// Created by andrey on 16.01.2022.
//

//
// Created by andrey on 15.01.2022.
//
#include <iostream>
#include "Karen-Filter.h"

void Karen::debug(){
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<< std::endl;
}
void Karen::info(){
    std::cout << "I cannot believe adding extra bacon cost more money. You don't put enought! If you did I would not have to ask for it!"<< std::endl;
}
void Karen::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month" << std::endl;
}
void Karen::error(){
    std::cout << "this is unacceptable, I want to speak to the manager now" << std::endl;
}
const std::string& Karen::getFunName() const {
    return funname;
}
void Karen::setFunName(const std::string& name){
    funname = name;
}

strings Karen::retur (std::string const &funstr){
    if (funstr == "debug"){
        return debug1;
    }
    else if (funstr == "info"){
        return info1;
    }
    else if (funstr == "warning"){
        return warning1;
    }
    else if (funstr == "error"){
        return error1;
    }
    else {
        return wrong1;
    }
}

void Karen::complain(std::string level) {
    level = funname;
    switch (retur(level)) {
        case debug1:
            Karen::debug();
            break;
        case info1:
            Karen::info();
            break;
        case warning1:
            Karen::warning();
            break;
        case error1:
            Karen::error();
            break;
    }
}

