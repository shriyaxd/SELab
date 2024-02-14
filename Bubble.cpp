//bubble sort
#include <bits/stdc++.h>
using namespace std;

void bub(vector<int> a)
{
    bool swapped;

    for(int i=0; i<a.size(); i++)
    {
        swapped = false;

        for(int j=1; j<a.size()-i; j++){
            if(a[j-1]>a[j])
            {
                swap(a[j], a[j-1]);
                swapped = true;
            }
        }

        if(swapped == false)
            break;
    }

    for(int x: a)
        cout<<x<<" ";
    return ;
}
int main()
{
    vector<int> a;
    cout<<"Enter numbers: ";
    int input;
    while(cin>>input)
    {
        a.push_back(input);
        if(cin.peek()=='\n')
            break;
    }
    
    bub(a);
    return 0;
}