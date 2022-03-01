#include<iostream>
#include<cmath>
using namespace std;
int Area(int);
int Area(int, int);
int Area(int, int, int);
double Area(double);
float Area(float,float);
int main()
{
cout << "\t1.Area of square:\n";
int s;
cout << "Enter side of the square:\n";
cin >> s;
cout << "Area:" << Area(s)<<endl;
cout << "\t2.Area of rectangle:\n";
int l, b;
cout << "Enter length of the rectangle:\n";
cin >> l;
cout << "Enter breadth of the rectangle:\n";
cin >> b;
cout << "Area:" << Area(l, b)<<endl;
cout << "\t3.Area of triangle:\n";
int a, c;
cout << "Enter 1st side:\n";
cin >> a;
cout << "Enter 2nd side:\n";
cin >> b;
cout << "Enter 3rd side:\n";
cin >> c;
cout << "Area:" << Area(a, b, c)<<endl;
cout << "\t4.Area of circle:\n";
double r;
cout << "Enter radius of circle:\n";
cin >> r;
cout << "Area:" << Area(r)<<endl;
cout << "\t5.Area of ellipse:\n";
float p, q;
cout << "Enter semi major axis:\n";
cin >> p;
cout << "Enter semi minor axis:\n";
cin >>q;
cout << "Area:" << Area(p,q)<<endl;
return 0;
}
int Area(int s)
{
int square_area;
square_area = s * s;
return square_area;
}
int Area(int l, int b)
{
int rect_area;
rect_area = l * b;
return rect_area;
}
int Area(int a, int b, int c)
{
int triangle_area; int s, sum;
s = (a + b + c) / 2;
sum = (s * (s - a) * (s - b) * (s - c));
triangle_area = sqrt(sum);
return triangle_area;
}
double Area(double r)
{
double circle_area;
circle_area = 3.14 * r * r;
return circle_area;
}
float Area(float p, float q)
{
float ellipse_area;
ellipse_area = 3.14 * p * q;
return ellipse_area;
}



