//
// Created by Artem Firsov on 10.04.22.
//

#ifndef YAHOO_FINANCE_HELPER_H
#define YAHOO_FINANCE_HELPER_H

#include <string>

class Helper {
public:
    static std::string getDate();

private:
    static std::string getDayMonth(int dm);

    static std::string getDate(time_t &i);

    static std::vector<std::tuple<long, double>> getTuples();
};


#endif //YAHOO_FINANCE_HELPER_H
