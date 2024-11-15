// 
// link: 

#include <iostream>
#include <vector>
using namespace std;

int main(){
        int currency[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        vector<int> ans;
        int N = 143;
        
        for(int i = 0; i < 10; i++){
            while(N >= currency[i]){
                ans.push_back(currency[i]);
                N -= currency[i];
            }
        }
        
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}