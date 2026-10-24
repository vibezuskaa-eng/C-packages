#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <stdexcept>
using namespace std;

int main()
{
    // apresentation
    int x;
    int y;
    std::cout << "Hello World\n";
    cout << "type a number:  ";
    cin >> x;
    char bill = ' ';
    cout << "What's the bill?:   ";
    cin >> bill;
    cout << "type a another number:  ";
    cin >> y;
    switch (bill)
    
    {
        switch (bill)
        {
        case '+':
            cout << x + y;
            break;

        case '-':
            cout << x - y;
            break;

        case '*':
        case 'x':
            cout << x * y;
            break;

        case '/':
            if (y == 0)
                throw std::domain_error("division by zero");

            cout << static_cast<double>(x) / y;
            break;

        default:
            throw std::invalid_argument("operador nao suportado");
        }

        return 0;
        return 0;
    }