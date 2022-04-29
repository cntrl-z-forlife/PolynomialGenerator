# PolynomialGenerator
Simple C++ program to extract polynomial equation in standard form from 3 coordinates.



Usage: Enter coordinates, one number at a time(6 numbers in total), and the program will output the a, b, and c values of the equation ax^2+bx+c. If the equation is linear, a will equal zero.

Dependencies: cmath, iostream

How it works: Solving 3 different standard form equations for a, b, and c gives the below formulas for 

(x1*(y3-y2)+x2*(y1-y3)+x3*(y2-y1)) / ((x1-x2)*(x1-x3)*(x2-x3)) = a

(y2-y1) / (x2-x1)) - (a*(x1+x2) = b

(y1 - (a * (x1 ^ 2))) - (b) * (x1)) = c

Feel free to suggest edits or add features.
