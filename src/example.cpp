#include "quote.hpp"
#include "helper.h"

int main() {
    // S&P 500
    Quote *snp500 = new Quote("^GSPC");

    // Get the historical spots from Yahoo Finance
    const std::string &date = Helper::getDate();

    snp500->getHistoricalSpots("2017-12-01", date.c_str(), "1d");

    // Print the spots
    snp500->printSpots();

    const std::vector<std::tuple<long, double>> &tuples = snp500->getTuples();
    delete snp500;
}
