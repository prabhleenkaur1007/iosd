/* PROLEM STATEMENT:
Takahashi will do a tap dance. The dance is described by a string S where each character is L, R, U, or D. These characters indicate the positions on which Takahashi should step. He will follow these instructions one by one in order, starting with the first character.S
 is said to be easily playable if and only if it satisfies both of the following conditions:
Every character in an odd position (1-st, 3-rd, 5-th, …) is R, U, or D.
Every character in an even position (2-nd, 4-th, 6-th, …) is L, U, or D.
Your task is to print Yes if S is easily playable, and No otherwise. */

#include <bits/stdc++.h>

using namespace std;

int main()
{   vector <char> s;
    for (char x; cin >> x; ) {
        s.push_back(x);
        // If input ends with enter, break loop
        if (cin.peek() == '\n') break;
    } 
    vector<char>::iterator it;
    int n=0;
    for (it = s.begin(); it != s.end(); ++it) {
        n++;
    }
    int count=0;
    for(int x=0;x<n;x++){    
        if(x%2==0){
          if(s[x]=='L'){
            // cout<<"No"<<endl;
            count=1;
            break;}
        }
          
        else if(x%2!=0){
         if(s[x]=='R'){
        //   cout<<"No"<<endl; 
          count=1;
          break;}
        }    
    }
    if(count==0)
     cout<<"Yes";
    else
     cout<<"No";
    return 0;
}

