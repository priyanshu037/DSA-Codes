// longest prefix suffix
// link: https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>

using namespace std;

int main(){

    string s = "ABCABDABCABCABCABD";

    vector<int>lps(s.size(), 0);
    int pre = 0, suf = 1;

    while(suf<s.size()){
        // condition 1: when prefix and suffix are equal
        if(s[pre]==s[suf]){
            lps[suf] = pre+1;
            pre++, suf++;
        }
        // condition 2: when prefix and suffix are not equal
        else{
            // condition 1: when prefix is pointing to 0 index
            if(pre==0){
               lps[suf] = 0;
               suf++; 
            }
            // 
            else{
                pre = lps[pre-1];
            }
        }
    }

    int ans = lps[s.size()-1];

    cout<<"Longest Prefix suffix: "<<ans<<endl;
}