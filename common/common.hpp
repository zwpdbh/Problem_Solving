//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_COMMON_HPP
#define PROJECT_COMMON_HPP

#include <stdexcept>
#include <string>

class TargetNotFoundException : public std::logic_error {
public:
    TargetNotFoundException(const std::string &message = "")
            : logic_error("Target not found: " + std::string(message)) {}
};

class PrecondViolateExcep: public std::logic_error {
public:
    PrecondViolateExcep(const std::string &message = "");
};

#endif //PROJECT_COMMON_HPP
