#include <iostream>
using namespace std;

int main(){
// 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

int temp;
cout<<"Enter the temperature: ";
cin>>temp;
if(temp>=70 && temp<=90){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}

}