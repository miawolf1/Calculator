#include<iostream>
#include<cmath>

using namespace std;

int main() 
{
string operation;
double number1, number2;
string answer = "yes";

cout << "This is a calculator program" << endl;
while (answer == "Yes" || answer == "yes")
{
    cout << "Enter first number" << endl;
cin >> number1;

cout << "Enter operation (+, -, *, /, r for square root): " << endl;
cin >> operation;

cout << "Enter second number" << endl;
cin  >> number2;


if (operation == "+") 
{
    cout << number1 + number2 << endl;
}

else if (operation == "-") 
{
    cout << number1 - number2 << endl;
}

else if (operation == "*") 
{
    cout << number1 * number2 << endl;
}

else if (operation == "/") 
{
    if (number1, number2 == 0) 
    {
        cout << "Division by 0 is not alowed!" << endl;
    }
    else {
        cout << number1 / number2 << endl;
    }
   
}

else if (operation == "r")
{
    double result = sqrt(number1);
    cout << "Result equals: " << result << endl;
}

else 
{
    cout << "Not a recognized operation" << endl;
}
cout << "Would you like to make more cauculations?" << endl;
cin>>answer;

if (answer == "Yes" || answer == "yes") 
{
    cout << "Going back..." << endl;
}

}


};