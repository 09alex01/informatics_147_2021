#include <iostream>
#include <cmath>
using namespace std;

void calculate(int *pvar)
{
(*pvar)+=5;
}

int main()
{
int var = 5;
cout << var << endl;
int *pvar = &var;
cout << *pvar << endl;
cout <<pvar <<endl;
*pvar = 13;
cout << var << endl;
calculate(&var);
cout <<var << endl;
return 0;
}