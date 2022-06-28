// During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

// Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

// You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.

// Input
// The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

// The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".

// Output
// Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".

// Examples
// input
// 5 1
// BGGBG
// output
// GBGGB

// input
// 5 2
// BGGBG => GBGGB => GGBGB 
// output
// GGBGB

// input
// 4 1
// GGGB
// output
// GGGB

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; //n is the number of children in the queue and t is the time of the queue transform
    string s;
    cin>>n>>t>>s;  
    while(t--)
    {
        for(int i = 1; i < n; ++i)
        {
            if(s[i] == 'G' && s[i-1]== 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout<<s<<'\n';
    return 0;
}

/* 
2 
BG => GB
GB 
BB 
GG 

khali BG ne 0 or 1 iteration

3 
BBB 
BBG => BGB => GBB 
BGG => GBG , GGB
BGB , GBB
GBB
GBG , GGB
GGG 
GGB

(1) BGB , GBB => G intial
(2) BGG , GBG => BG => first case
(3) BBG , BGB , GBB ??????? step (1)
(4) BBB

ok [B | B | ... G | .. | G]

Algo:

remove G from Starting
remove B from Ending
number of G
find the position i-1 of last G in the string x
place that G at s[i - x]
max_iteration = i - x 
    if t >= max_iteration
        return sorted
    else
        return calculated()

calculated ()
    




--------------------------------------

B\ G\ B G /B
B\ G\ G B /B , B\ G G / B B , B G G\ B B , G \ B G / B B , G G B B B \

t = 5
BGBGBGGBBBGGGBBBGBGBG

BGBGBG 2
GBGBGB
GGBGBB 


GGGGGGGGGGBBBBBBBBBBB

---------------------------------------

3 2 
BBG => BGB => GBB

4 1
BBGG = BGBG

4 2
BBGG => BGBG => BGGB

4 3
BBGG => BGBG => BGGB => GBGB

4 4
BBGG => BGBG => BGGB => GBGB => GGBB

5 5 (3)
GBBBG => GBBGB => GBGBB => GGBBB (3)

5 5 (4)
BBBBG => BBBGB => BBGBB => BGBBB => GBBBB (4)

7 7
BBBBBGG 
=> BBBBGBG => BBBGBGB => BBGBGBB => BGBGBBB => GBGBBBB => GGBBBBB (6)

7 7
BBGBGBB
=> BGBGBBB 
*/

// iteration t <= n  'G' 