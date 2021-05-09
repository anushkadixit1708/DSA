/* Iterative method*/
#include <iostream>
using namespace std;
int main()
{
char str[1000], rev[1000];
int i, j, count = 0;
cin >> str;

while (str[count] != NULL)
{
count++;
}
j = count - 1;

for (i = 0; i < count; i++) 
{
rev[i] = str[j];
j--;
}
cout << rev;
}
