#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
}

void g(int yval)
{
   int y;
   cout << &y << endl;
}

int main()
{
   f(7);
   g(11);
   return 0;
}

// địa chỉ của 2 biến giống nhau vì đều là biến địa phương đầu tiên của các hàm cùng có 1 biến kiểu int

