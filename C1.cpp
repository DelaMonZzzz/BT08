#include <iostream>

using namespace std;

int Length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i - 1;
}

char _reverse(char a[])
{
    int length = Length(a);
    char *b = new char [length + 1];
    for (int i = 0; i < length; i++)
    {
        b[i] = a[length - 1 - i];
    }
    b[length] = '\0';
    return *b;
}

void delete_char(char a[], char c)
{
    int length = Length(a);
    for (int i = 0; i < length; i++)
    {
        if (a[i] == c) a[i] = '\0';
    }
    for (int i = 0; i < length; i++)
    {
        cout << a[i];
    }
}

void pad_right(char a[], int n)
{
    int length = Length(a);
    if (length >= n) {
        return;
    } else {
        for (int i = length; i < n; i++)
        {
            a[i] == ' ';
        }
    }
    a[n] = '\0';
}

void pad_left(char a[], int n)
{
    int length = Length(a);
    if (length >= n) {
        return;
    } else {
        int m = n - length;
        for(int i = n - 1; i >= m; i--)
        {
            a[i] = a[i - m];
        }
        a[n] = '\0';
        for(int i = 0; i < m; i++)
        {
            a[i] = ' ';
        }
    }
}

void truncate(char a[], int n)
{
    int length = Length(a);
    if (length <= n) {
        return;
        a[n] = '\0';
    } else {
        for (int i = n; i < length; i++)
        {
            a[i] = ' ';
        }
    }
}

bool is_palindrome(char a[])
{
    int length = Length(a);
    int m = 0;
    while (m < length/2)
    {
        if (a[m] != a[length - m - 1]) return false;
        m++;
    }
    return true;
}

void trim_left(char a[])
{
    int length = Length(a);
    while (a[0] == ' ')
    {
        for (int i = 0; i < length - 1; i++)
        {
            a[i] = a[i+1];
        }
        length--;
    }
}

void trim_right(char a[])
{
    int length = Length(a);
    while (a[length-1] == ' ')
    {
        length--;
    }
    a[length] = '\0';
}

int main()
{
    char a[] = "    tentoilamon    ";
    _reverse(a);
    char c = 't';
    delete_char(a, c);
    pad_right(a, 30);
    pad_left(a, 30);
    truncate(a, 3);
    cout << a << endl;
    cout << is_palindrome(a) << endl;
    cout << trim_left(a) << endl;
    cout << trim_right(a) << endl;

    return 0;
}


