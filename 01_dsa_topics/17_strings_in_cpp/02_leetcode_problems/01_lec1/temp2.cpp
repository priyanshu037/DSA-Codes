// Check if String Rotated by 2 Places
// link: https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

void rotateclockwise(string s){
    char c = s[s.size()-1];
    
}

void rotateanticlockwise(string s){

}
int main(){

    string str1 = "amazon";
    string str2 = "azonam";

    string clockwise = str1;
    string anticlockwise = str1;

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise==str2){
        return 1;
    }

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if(anticlockwise==str2){
        return 1;
    }

    return 0;

}