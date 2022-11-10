#include<iostream>

using namespace std;

int main()
{
    int watermelon_weight;
    cin>>watermelon_weight;

    if(watermelon_weight%2==0 && watermelon_weight >2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}