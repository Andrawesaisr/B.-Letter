// sheet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<bitset>
using namespace std;
int main()
{
    long long l1, l2,counter=0;
    int check = 1;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    l1 = s1.size(), l2 = s2.size();
    vector<long long>v1(123, 0); vector<long long>v2(123, 0);
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != ' ') {
            v1[s1[i]]++;
         }
        
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] != ' ') {
            v2[s2[i]]++;
         }
       
    }
    for (int i = 0; i < 123; i++) {
        if (v2[i]) {
            if (v2[i] <= v1[i]) {
                continue;
            }
            else {
                check = 0;
            }
        }
    }
    if (check == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

