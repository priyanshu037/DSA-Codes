// Find the Index of the First Occurrence in a String
// Brute force approach
// link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

#include <iostream>
using namespace std;


int stringMatch(string &s1, string &s2, int m, int n){
        for(int i=0; i<=n-m; i++){
        int first = i;
        int second = 0;

        while(second < m){
            if(s1[first]!=s2[second]){
                break;
            }else{
                first++, second++;
            }
        }

        if(second == m){
            return first-second;
        }
    }

    return -1;
}

int main(){

    string s1 = "abcabdefg";
    string s2 = "def";

    int n = s1.size();
    int m = s2.size();

    if(stringMatch(s1, s2, m, n)){
        cout<<"String matched at index: "<<stringMatch(s1, s2, m, n)<<endl;
    }else{
        cout<<"String not matched"<<endl;
    }


}