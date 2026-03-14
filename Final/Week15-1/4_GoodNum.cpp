#include <iostream>
#include <string>
using namespace std;

bool Type1(const string& license)
{
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        if (license[i] == license[i + 1])
        {
            count++;
        }
    }
    if (count == 4)
    {
        cout << "Type 1 ";
        return true;
    }
    return false;
}

bool Type2(const string& license)
{
    int count_A = 1;
    int count_Z = 1;
    for (int i = 0; i < 3; i++)
    {
        if (license[i] - license[i + 1] == -1)
        {
            count_A++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (license[i] - license[i + 1] == 1)
        {
            count_Z++;
        }
    }
    bool matched = false;
    if (count_A == 4)
    {
        cout << "Type 2(A2Z) ";
        matched = true;
    }
    if (count_Z == 4)
    {
        cout << "Type 2(Z2A) ";
        matched = true;
    }
    return matched;
}

bool Type3(const string& license)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 4; i++)
    {
        if (license[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even == 4 || odd == 4)
    {
        cout << "Type 3 ";
        return true;
    }
    return false;
}

bool Type4(const string& license)
{
    if (license[0] == license[1] && license[2] == license[3])
    {
        cout << "Type 4 ";
        return true;
    }
    return false;
}

bool Type5(const string& license)
{
    if (license[0] == license[3] && license[1] == license[2]) {
        cout << "Type 5 ";
        return true;
    }
    return false;
}

int main()
{
    string license;
    cin >> license;
    if (license.size()!=4) {
        cout << "กรุณาป้อนเลข 4 หลัก" ;
        return 0;
    }
    bool hasType = false;
    hasType |= Type1(license);
    hasType |= Type2(license);
    hasType |= Type3(license);
    hasType |= Type4(license);
    hasType |= Type5(license);

    if (!hasType) {
        cout << "No Type";
    }
}