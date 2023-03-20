#include <iostream>
using namespace std;
int main()
{
  float amount, exchangeRate;
  int cr;
  cout << "Enter your amount to convert (inr): ";
  cin >> amount;
  cout << "choose the currencey\n1.usd\n2.euro\n3.Sri Lanka Rupee\n4.Egyptian Pound\n5.Japanese Yen\n6.Swiss Franc\n7.Russian Ruble\n8.Canadian Dollar\n9.Australian Dollar\n10.i konw the exchange rates\n";
  cin >> cr;
  if (cr == 10)
  {
  }

  switch (cr)
  {
  case 1:
    exchangeRate = 0.012;

    break;
    ;
  case 2:
    exchangeRate = 0.011;
    break;
  case 3:
    exchangeRate = 4.42;
    break;
  case 4:
    exchangeRate = 0.37;
    break;
  case 5:
    exchangeRate = 1.59;
    break;
  case 6:
    exchangeRate = 0.011;
    break;
  case 7:
    exchangeRate = 0.88;
    break;
  case 8:
    exchangeRate = 0.016;
    break;
  case 9:
    exchangeRate = 0.017;
    break;
  case 10:
    cout<<"Enter the exchange rate: ";
    scanf("%f", &exchangeRate);
    break;
  default:
    cout<<"invalid input";
    return 0;
  }
  float convertedAmount = amount * exchangeRate;

  cout << "The converted amount is: " << convertedAmount;

  return 0;
}
// usd 1
// euro 0.932
// inr 82.565
// Sri Lanka Rupee 365.342
// Egyptian Pound 30.371
// Japanese Yen 131.263
// Swiss Franc 0.92
// Russian Ruble 72.207
// Canadian Dollar 1.341
// Australian Dollar 1.437
// Rates 8 February 2023