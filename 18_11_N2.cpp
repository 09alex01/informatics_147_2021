#include <iostream>
#include <cmath>
using namespace std;

void change(float *pa, float *pb)
{
float c = *pa;
*pa=*pb;
*pb=c;
}

int main()
{
float a, b;
a=5.37;
b=13.77;
cout<< a << " " << b << endl;
change (&a,&b);
cout << "������ ����� ����� " << a <<endl;
cout << "������ ����� ����� " << b << endl;
return 0;
}