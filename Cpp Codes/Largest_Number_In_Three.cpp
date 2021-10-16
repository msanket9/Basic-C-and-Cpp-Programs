#include<iostream>
using namespace std;

int main() {
  int num1 = 2, num2 = 5, num3 = 7;
  int largest = (num1 > num2) ? (num1 > num3 ? num1: num3) : (num2 > num3 ? num2 : num3);

  cout<<"The largest number is "<<largest;
}