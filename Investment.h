/*
 * Nicholas Altland
 *
 * Stock Market API: Investment Super Class header file
 *
 */

#include <string>

class Investment {

protected:
    std::string companyName;
    float initialInvestment;
    float yearlyReturns = 0.0;

public:
    /**
     * Requires: nothing
     * Modifies:
     * Effects: Creates an investment class
     */
    Investment();

    /**
     * Requires: nothing
     * Modifies: company name and initialInvestment
     * Effects: Sets the company name and the initial investment
     */
    explicit Investment(std::string companyName, float initialInvestment);


    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: Nothing, allows subclasses to overwrite it
     */
    virtual ~Investment() = default;

    // Getters
    virtual std::string getCompanyName() const;
    virtual float getInitialInvestment() const;
    virtual float getYearlyReturns() const;

    // Setters
    void setCompanyName(std::string companyName);
    void setInitialInvestment(float initialInvestment);
    void setYearlyReturns(float yearlyReturns);

    // Overload Operands
    friend  bool operator == (const Investment &first, const Investment &second);
    friend bool operator > (const Investment &first, const Investment &second);
    friend bool operator < (const Investment &first, const Investment &second);
    friend bool operator != (const Investment &first, const Investment &second);
    friend bool operator <= (const Investment &first, const Investment &second);
    friend bool operator >= (const Investment &first, const Investment &second);

};
