#include <string>
#include <iostream>

class Account{
    public:
      void calculate() { amount += amount * interestRate; }
      static double rate() { return interestRate; }
      static void rate(double);

    private: 
      std::string owner;
      double amount;
      static double interestRate;
      static constexpr double initInterestRate = 10.24;
      static double initRate(){return initInterestRate;}
};

double Account::interestRate = initRate();

void Account::rate(double newRate)
{
    interestRate = newRate;
}

int main()
{
    Account a;
    std::cout << a.rate() << std::endl;
    a.rate(12.12);
    std::cout << a.rate() << std::endl;
    return 0;
}