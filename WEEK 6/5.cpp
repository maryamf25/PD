#include <iostream>
using namespace std;

float CalculateFruitPrice(string day, float Quantity, string fruitName);
main()
{
    string day, fruitName;
    float price, Quantity, bill;

    cout << "Enter the fruit name: ";
    cin >> fruitName;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> Quantity;
    bill = CalculateFruitPrice(day, Quantity, fruitName);
        
    if (bill == 0){
        cout << "error";
    }
    else{
        cout << bill;
    }
    
}
float CalculateFruitPrice(string day, float Quantity, string fruitName)
{
    float price;
    if (day == "Saturday" || day == "Sunday")
    {
        if (fruitName == "banana")
        {
            price = 2.70;
        }
        else if (fruitName == "apple")
        {
            price = 1.25;
        }
        else if (fruitName == "orange")
        {
            price = 0.90;
        }
        else if (fruitName == "grapefruit")
        {
            price = 1.60;
        }
        else if (fruitName == "kiwi")
        {
            price = 3.00;
        }
        else if (fruitName == "pineapple")
        {
            price = 5.60;
        }
        else if (fruitName == "grapes")
        {
            price = 4.20;
        }
        else {
            Quantity = 0;
        }
       
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruitName == "banana")
        {
            price = 2.50;
        }
        else if (fruitName == "apple")
        {
            price = 1.20;
        }
        else if (fruitName == "orange")
        {
            price = 0.85;
        }
        else if (fruitName == "grapefruit")
        {
            price = 1.45;
        }
        else if (fruitName == "kiwi")
        {
            price = 2.70;
        }
        else if (fruitName == "pineapple")
        {
            price = 5.50;
        }
        else if (fruitName == "grapes")
        {
            price = 3.85;
        }
         else {
            Quantity = 0;
        }
       
    }
     else {
            Quantity = 0;
        }
  
    return price*Quantity;
}
