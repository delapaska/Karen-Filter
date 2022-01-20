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
/*
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
*/

std::hash<std::string> hasher;

void Karen::complain(std::string level) {
    size_t hash = hasher(level);
   const size_t dHash = hasher("debug");
   const size_t iHash = hasher("info");
     const size_t wHash = hasher("warning");
   const size_t eHash = hasher("error");
    switch (hash) {
        case dHash:
            Karen::debug();
            break;
        case iHash:
            Karen::info();
            break;
        case wHash:
            Karen::warning();
            break;
        case eHash:
            Karen::error();
            break;
    }
}


