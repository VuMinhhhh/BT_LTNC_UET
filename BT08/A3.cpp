#include <bits/stdc++.h>

using namespace std;

// Muon trao gia tri hai con tro phai truyen tham chieu, la truyen vao con tro cap 2 hoac dia chi cua 2 con tro day

void swap_pointers(char* x, char* y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}