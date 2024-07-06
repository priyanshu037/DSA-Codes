// leap year 
// link: https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter year: "<<endl;
    cin>>N;

    if(N%400==0){
        cout<<"Leap year"<<endl;
    }else if(N%4==0 && N%100!=0){
        cout<<"Leap year"<<endl;
    }else{
        cout<<"Not a leap year"<<endl;
    }
    
}