#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

lli findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(lli arr[], lli n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

bool primetest(int n)
{

    if(n!=2 && n%2==0)
        return false;
    for(int i=3; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n = s.size();
        int b1=0,b2=0,c1=0,c2=0;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')b1++;
            else if(s[i]=='[')c1++;
            else if(s[i]==')' && b1>0){
                b1--;
                sum++;
            }
            else if(s[i]==']' && c1>0){
                c1--;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

