//
// Created by zwpdbh on 2018/8/10.
//

#include "common.hpp"

PrecondViolateExcep::PrecondViolateExcep(const std::string &message)
: logic_error("Precondition Violated Exception: " + message);
{}