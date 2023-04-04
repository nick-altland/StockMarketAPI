/*
 * Nicholas Altland
 *
 * Stock Market API: marketAPI header File
 *
 */

#include <string>
#include <vector>

#include "Stock.h"


class MarketAPI {
private:
    int lineNumber;
    std::string fileHeader;

public:
    /*
     * Default Constructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: lineNumber and fileHeader to default values
     *
     */
    MarketAPI();


    /*
     * Default Constructor
     * Requires: an integer and a string
     * Modifies: lineNumber and fileHeader
     * Effects: sets lineNumber and fileHeader to the values that are passed through
     *
     */
    MarketAPI(int lineNumber, std::string fileHeader);

    /*
     * readBondFile
     * Requires: a file name, vector of Bonds, and company name
     * Modifies: Nothing
     * Effects: Reads through the list of known bonds, searching for the one given. If found, creates a new bond object from it
     *          and returns it. If not, it creates a default bond and returns that
     */
    Bond readBondFile(std::string &fileName, std::vector<Bond> &bondsFromFile, std::string &companyName);


    /*
     * readStockFile
     * Requires: a file name, vector of stocks company name
     * Modifies: Nothing
     * Effects: Reads through the list of known stocks, searching for the one given. If found, creates a new stock object from it
     *          and returns it. If not, it creates a default stock and returns that
     */
    Stock readStockFile(std::string &fileName, std::vector<Stock> &stocksFromFile, std::string &companyName);

    /*
     * writeBondFile
     * Requires: a file name and a vector of bonds
     * Modifies: the file that is passed through
     * Effects: Takes the values of the vector and writes it to the file
     */
    void writeBondFile(std::string &fileName, std::vector<Bond> &bonds);

    /*
     * writeStockFile
     * Requires: a file name and a vector of stocks
     * Modifies: the file that is passed through
     * Effects: Takes the values of the vector and writes it to the file being passed through
     */
    void writeStockFile(std::string &fileName, std::vector<Stock> &stocks);

    /*
     * compareInvestments
     * Requires: A Bond and a Stock object
     * Modifies: Nothing
     * Effects: Takes a bond and a stock and compares them, after calculating and outputting several investment returns
     */
    void static compareInvestments(Bond &bond, Stock &stock);


    // Getter
    int getLineNumber() const;

    /*
     * validateStockName
     * Requires: nothing
     * Modifies: stockName
     * Effects: Asks user to enter a stock name, then validates the input by checking the length. Then, returns the stock name to main
     */
    std::string static validateString();


    /*
     * validateTickerName
     * Requires: Nothing
     * Modifies: tickerName
     * Effects: Asks user to enter a ticker name, then validates the input by checking the length then returns it to main
     */
    std::string static validateTickerName();


    /* validateFloatValue
     *
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Checks to make sure the number entered by the user is a valid float, which can be
     *          either negative or positive
     */
    float static validateFloatValue();

    /* validatePositiveInteger
     *
     * Requires: Nothing
     * Modifies: The integer that is passed through from main
     * Effects: Checks to make sure the number entered by the user is a valid, positive
     *          integer, and then returns the value to main
     */
    int static validatePositiveInteger();

    /* validateGoAgain
     *
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Validation loop to get y/n feedback from user, and return the character back to main
     */
    char static validateGoAgain();


};