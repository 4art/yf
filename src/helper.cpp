//
// Created by Artem Firsov on 10.04.22.
//

#include "helper.h"
#include "quote.hpp"

std::string Helper::getDate() {
    auto now = std::chrono::system_clock::now();
    time_t i = std::chrono::system_clock::to_time_t(now);
    return getDate(i);
}

std::string Helper::getDate(time_t &i) {
    tm *pTm = localtime(&i);
    const std::string &year = std::to_string(pTm->tm_year + 1900);
    return year + "-" + getDayMonth(pTm->tm_mon) + "-" + getDayMonth(pTm->tm_mday);
}

std::string Helper::getDayMonth(int dm) {
    return dm > 9 ? std::to_string(dm) : "0" + std::to_string(dm);
}

