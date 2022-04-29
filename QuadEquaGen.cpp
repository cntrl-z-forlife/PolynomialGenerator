#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //Defines Variables ahead of time
  double x1;
  double x2;
  double x3;
  double y1;
  double y2;
  double y3;
  double a;
  double b;
  double c;
  //begins user interaction
  cout << "This is a C++ Polynomial generator, using x and y coordinates from three points to output the a,b, and c values of ax^2+bx+c.\n\n";
  cout << "Enter x1(x of the first point):\n";
  cin >> x1;
  cout << "Enter y1:\n";
  cin >> y1;
  cout << "Enter x2:\n";
  cin >> x2;
  cout << "Enter y2:\n";
  cin >> y2;
  cout << "Enter x3:\n";
  cin >> x3;
  cout << "Enter y3:\n";
  cin >> y3;
  //fun maths
  a = double(x1*(y3-y2)+x2*(y1-y3)+x3*(y2-y1)) / ((x1-x2)*(x1-x3)*(x2-x3));
  b = double((y2-y1) / (x2-x1)) - (a*(x1+x2));
  c = double(y1 - (a * (pow((x1),2))) - (b) * (x1));
  cout <<"\na:"<<a<<"\nb:"<<b<<"\nc:"<<c;
}
