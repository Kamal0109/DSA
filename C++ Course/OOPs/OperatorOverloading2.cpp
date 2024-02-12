// Kamal Kumar Tiwari
//21312
// operator overloading to perform set union and intersection
//15-03-2023

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


class set
{
    int a[4];

public:
    void givea(void)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
    }
    //
    set operator+(set s)
    {
        int len[8];

        int k = 0;
        for (int i = 0; i < 4; i++)
        {
            len[i] = a[i];
        }

        for (int i = 0; i < 4; i++)
        {
            len[i + 4] = s.a[i];
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = i + 1; j < 8; j++)
            {
                if (len[i] == len[j])
                {
                    len[j] = -1;
                }
            }
        }
        for (int i = 0; i < 8; i++)
        {

            if (len[i] != -1)
            {
                cout << len[i] << " ";
            }
        }
    }
    set operator-(set s)
    {
        int len[8];
        sort(a, a + 4);
        sort(s.a, s.a + 4);
        int flag = 1;
        int k = 0;

        for (int i = 0; i < 4; i++)
        {
            flag = 1;
            for (int j = 0; j < 4; j++)
            {

                if (a[i] == s.a[j])
                {

                    flag = 0;

                    break;
                }
            }

            if (flag == 1)
            {
                len[i] = a[i];
                cout << len[i];
            }
        }
    }
};
int main()
{
    set s;
    set s2;
    s.givea();
    s2.givea();
    s + s2;
}