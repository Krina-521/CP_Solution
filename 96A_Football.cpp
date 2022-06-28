// INCOMPLETE

// Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

// Input
// The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

// Output
// Print "YES" if the situation is dangerous. Otherwise, print "NO".

// Examples
// input
// 001001
// output
// NO
// input
// 1000000001
// output
// YES

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int x=0,y=0,z=0;
    cin>>str;
    for(int i = 0; i<=str.size(); i++)
    {
        if(str[i] == '1')
        {
            x++;
            y = 0;
        }
        else{
            y++;
            x = 0;
        }
    }
    if(z == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}