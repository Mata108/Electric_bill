# Electric_bill
project of  electric bill in C++ language
This C++ program represents a simple electricity billing system with the following features:

It defines two classes, consumerdetails and electricitybill. The electricitybill class inherits from consumerdetails and extends it to store consumer details and calculate electricity bills.

Users can choose from a menu that includes options to:

View unit charges for electricity consumption.
Register consumers, input their details, and calculate their electricity bills.
Exit the program.
Unit charges are calculated based on consumption thresholds:

For the first 100 units, the rate is 60 paise per unit plus a base charge of Rs. 50.
For the next 200 units, the rate is 80 paise per unit plus the base charge.
Beyond 300 units, the rate is 90 paise per unit plus a 15% surcharge and the base charge.
The program ensures that the consumer's account number is exactly eight digits and validates the input month for the bill.
After entering consumer details and consumption data, the program calculates the bill amount and displays all relevant information.

The program includes a company name and contact information displayed at the beginning.

It utilizes a loop to keep the menu interactive until the user chooses to exit.

This program provides a basic simulation of an electricity billing system and serves as a learning exercise for classes, user input validation, and menu-driven interfaces.
