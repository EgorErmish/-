
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Введите число: ";
    cin>>num;
    for (int i = num; i>=1;i/=2){
       if(i == 1){
           cout<<"Число являетчя степенью двойки";
       }else {
           cout<<"Число не являетчя степенью двойки";
           break;
       }
        
    }
    return 0;
}
