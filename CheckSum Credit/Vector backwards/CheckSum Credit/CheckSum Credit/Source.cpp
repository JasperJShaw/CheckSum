#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int A = 0;
int B = 0;
int sumOdd(vector <int>cardNumReverse)
{
    vector<int>oddNum;
    int i = 1;
    int k = 0;
    while (i <= cardNumReverse.size())
    {
        if (i % 2 != 0)
        {
            oddNum.push_back(i);
            i++;
        }
        else
            i++;
    }
    while (k < oddNum.size())
    {
        A = A + oddNum.at(k);
        k++;
    }
    cout << A << "\n";
    return A;
}

int sumEven(vector<int>cardNumReverse) {
    vector<int>evenNum;
    int i = 0;
    int k = 0;
    int j = 0;
    int l = 1;
    int t = 0;
    int firstDig;
    int secondDig;
    vector<int>overTen;
    vector<int>secondDigit;
    while (i <= cardNumReverse.size())
    {

        if (i % 2 == 0)
        {
            evenNum.push_back(cardNumReverse.at(t));
            i++;
        }
        else
            i++;
    }
    while (k < evenNum.size())
    {
        if (evenNum.at(k) > 10 && evenNum.at(k) < 99)
        {
            firstDig = evenNum.at(k) / 10;
            overTen.push_back(firstDig);
            secondDig = evenNum.at(k) % 10;
            secondDigit.push_back(secondDig);
            evenNum.at(k) = overTen.at(j) + secondDigit.at(j);
            j++;
            k++;
        }
        else
        {
            j++;
            k++;
        }
    }
    while (l < evenNum.size())
    {
        B = B + evenNum.at(l);
        l++;
    }
    return B;
}
int finalCalc()
{
    int result;
    result = A + B;
    if (result % 10 == 0)
    {
        cout << "Check has been passed.";
    }
    else
    {
        cout << "Check failed";
    }
    return result;
}
int main() {
    int i = 0;
    vector<int>cardNum = { 3,4,14,5,6,7,8,9,5,3,6,7,3,5,8,9 };
    vector<int>cardNumReverse;
    copy(cardNum.rbegin(), cardNum.rend(), back_inserter(cardNumReverse));
    while (i < cardNumReverse.size())
    {
        cout << cardNumReverse.at(i);
        i++;
    }
    sumOdd(cardNumReverse);
    sumEven(cardNumReverse);
    finalCalc();
    //system("PAUSE");
    return 0;
}