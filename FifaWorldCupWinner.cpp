#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> worldCupWinners =
    {
        {1930, "Uruguay"},      {1934, "Italy"},        {1938, "Italy"},     {1950, "Uruguay"},
        {1954, "West Germany"}, {1958, "Brazil"},       {1962, "Brazil"},    {1966, "England"},
        {1970, "Brazil"},       {1974, "West Germany"}, {1978, "Argentina"}, {1982, "Italy"},
        {1986, "Argentina"},    {1990, "West Germany"}, {1994, "Brazil"},    {1998, "France"},
        {2002, "Brazil"},       {2006, "Italy"},        {2010, "Spain"},     {2014, "Germany"},
        {2018, "France"},       {2022, "Argentina"}
    };
    
    std::cout << "Enter the year of the FIFA World Cup: ";
    int year;
    std::cin >> year;
    
    if (worldCupWinners.find(year) != worldCupWinners.end()) {
        std::cout << "The winner of the " << year << " FIFA World Cup was " << worldCupWinners[year] << "." << std::endl;
    }
    else {
        std::cout << "There was no FIFA World Cup held in " << year << "." << std::endl;
    }
    
    return 0;
}
