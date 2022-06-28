// Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

// But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

// This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

// Input
// The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

// Output
// If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

// Examples
// input
// wjmzbmr
// output
// CHAT WITH HER!
// input
// xiaodao
// output
// IGNORE HIM!
// input
// sevenkplus
// output
// CHAT WITH HER!

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
    int count =0;
    string s;
    cin >> s;
    
    for(int i=0; i < s.length() - 1; i++){
      for(int j = i + 1; j < s.length(); j++){
          if(s[i] == s[j]){
              count++;
              break;
          }
      } 
    }
    int comp = s.length() - count;
    if(comp%2 == 0){
        cout << "CHAT WITH HER!\n";
    }else{
        cout << "IGNORE HIM!\n";
    }
    return 0;
}