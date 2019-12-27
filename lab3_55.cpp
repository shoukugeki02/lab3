#include <iostream>
using namespace std;
int main()
{
    string text1;
    string text2;
    int N;
    int count=0;
    cout << "Enter the fisrt text\n";
    cin >> text1;
    cout << "Enter the second text\n";
    cin >> text2;
    cout << "Enter N";
    cin >> N;
    while(count < N){
    if(count%2==0){
        cout << text1<<" ";
   }else{
        cout << text2<<" ";
        
   }
      
count=count+1;

    }


}