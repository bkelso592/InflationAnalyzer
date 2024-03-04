#include <iostream>

// Function prototypes
void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo);
void calculateInflation(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRateYear1, double& inflationRateYear2);
void outputResults(double inflationRateYear1, double inflationRateYear2);

int main() {
    double currentPrice, priceOneYearAgo, priceTwoYearsAgo;
    double inflationRateYear1, inflationRateYear2;

    getInput(currentPrice, priceOneYearAgo, priceTwoYearsAgo);
    calculateInflation(currentPrice, priceOneYearAgo, priceTwoYearsAgo, inflationRateYear1, inflationRateYear2);
    outputResults(inflationRateYear1, inflationRateYear2);

    return 0;
}

// Function to get input from the user
void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo) {
    std::cout << "Enter the current price of the item: ";
    std::cin >> currentPrice;
    std::cout << "Enter the price of the item one year ago: ";
    std::cin >> priceOneYearAgo;
    std::cout << "Enter the price of the item two years ago: ";
    std::cin >> priceTwoYearsAgo;
}

// Function to calculate the inflation rates
void calculateInflation(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRateYear1, double& inflationRateYear2) {
    inflationRateYear1 = (currentPrice - priceOneYearAgo) / priceOneYearAgo;
    inflationRateYear2 = (priceOneYearAgo - priceTwoYearsAgo) / priceTwoYearsAgo;
}

// Function to output the results
void outputResults(double inflationRateYear1, double inflationRateYear2) {
    std::cout << "Inflation rate for the first year: " << (inflationRateYear1 > 0 ? "Increasing" : "Decreasing") << std::endl;
    std::cout << "Inflation rate for the second year: " << (inflationRateYear2 > 0 ? "Increasing" : "Decreasing") << std::endl;
}