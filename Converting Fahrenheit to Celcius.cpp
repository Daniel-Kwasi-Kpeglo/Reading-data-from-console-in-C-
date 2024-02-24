#include <iostream>

using namespace std;

int main(){

  cout << "Fahrenheit to Celcius converter: ";

  int Fahrenheit;

  cin >> Fahrenheit;

  double Celcius = (Fahrenheit - 32) * 1.8;

  cout << Celcius;
}