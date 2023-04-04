# Stock Market API

Prompt the user for both a stock and a bond, then perform calculations on each.

---

### Include a summary of your program, including a list of Module 2 concepts used:

DISCLAIMER: THIS PROGRAM IS IN NO WAY FINANCIAL ADVICE, AND IS FOR EDUCATIONAL AND THEORETICAL PURPOSES ONLY!

This program was designed as the basis for my stock market API. The end goal is to create a web searchable format program that will pull data to create graphs and return calculations based on realtime data. 

The program is structured as follows. The user is greeted and given instructions. They are then prompted for the company name for a bond. This data, along with an empty vector of bonds is sent to marketAPI. The bond csv file is opened and read through, checking each line to see if it matches the company name. If it does, the line where it is found is saved. If not, the company is a new one to the program and the user is asked to enter information into it. However, if it has been found, the information is printed to the screen and the user can edit different variables. If the user edits a bond/creates a new one, the vector is sent to marketAPI and the file is overwritten from the vector. The exact same process is used to create a Stock, with different variables.

In the final step of the program, the bond and stock are analyzed. Calculations are done to see the yearly returns of both investments. Additionally, the stock's intrinsic value is compared to the current market price, and the user is told whether it is a good investment or not. Finally, the yearly returns are compared, and the user is told which would generate more wealth yearly.

The program then asks the user if they wish to go again, or wish to exit.

### Files and Their Functionality

- main.cpp: This is the driver for the API. No calculations are done here, but there are a few validation loops as well as a majority of the function calls. Many of the classes and objects are created here
- marketAPI: I think of this as the user interface. All the input validation is done here, and it acts as a layer between the user in main and the calculations being done in the Investment classes. All the file input and output is done here in readBondFile, readStockFile, writeBondFile, and writeStockFile.
- Investment: This is the superclass for the polymorphism. An investment HAS-A Company and an Initial investment amount, and after a calculation is called in the subclasses a yearly return. This last value is the one that the overload comparisons work off of.
- Bond: The first subclass, a Bond IS-A investment, and has additional variables that make it unique when compared to other investments. 
- Stock: The second subclass, a Stock IS-A investment, and again has unique characteristics.

The next step would be adding further subclasses of both Investment, but also of Bond and Stock, since both have subclasses that have different returns or modifiers that change how they behave. however, for the moment these are enough to work with.

---

## Future plans for project:

### Further Calculations

With the basic library built, I can now move onto adding more calculations to the program. What is the current market trend? What will the price of the stock be tomorrow? One prompt I want to add is asking for the top stock of the day. This would provide the stock, from the library, with the largest negative value when compared to its current market price, then print it out to main. Additionally, I want to add better search functionality, and implement a data set level search algorithm make searching more efficient.

### Web Scrapper

This is the core, main stage of the project. I want to make a web scrapper that will pull the actual value of a stock from the internet and display it to the user. This will build on my previous step of creating a library, only instead of searching a library it will search the web. Additional data points that I want to pull could be:

* Data that can be turned into graphs that show previous growth and projected growth
* News articles on this stock

It will also calculate and make a general statement about if this stock is a good investment. The next step would be to have the user enter a general category, such as "technology" or "automotive" and provide the top three stocks in that industry. After that, the final step would be to provide the three best performing stocks of the day.

### Visual Update

Once the system works, the next step will be to implement a better UI. There are multiple ways to do this, but I plan on hosting it on a website, and using python or another program to create more visually appealing graphs.



### Citations:
- [Formula to calculate the current market value of a stock](https://en.wikipedia.org/wiki/Benjamin_Graham_formula)
- [Price to earnings formula](https://smallbusiness.chron.com/calculate-companys-stock-price-21802.html)
- [In-depth explanation of intrinsic models](https://valueinvesting.io/MSFT/valuation/intrinsic-value)

---
