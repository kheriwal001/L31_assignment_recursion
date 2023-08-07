#include<bits/stdc++.h>
using namespace std;
/*Q1 - Given a number n, print the following pattern without using any loop.
n, n-5, n-10, ..., 0, 5, 10, ..., n-5, n
There should be 0 or at most one occurrence of negative number in the series.
sol:-

void rec_call(int n , int m , bool flag){
    cout<<m<<" ";
    if(n==m && flag == false){
        return;
    }
    if(flag){
        if(m-5>0){
            rec_call(n,m-5,true);
        }
        else{
            rec_call(n,m-5,false);
        }
    }
    else{
        rec_call(n,m+5,false);
    }
}
int main(){
    int n;
    cin>>n;
    rec_call(n,n,true);
    return 0;
}


Q2 - Find m-th summation of first n natural numbers where m-th summation of first n natural
numbers is defined as following:
If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
Else :SUM(n, 1) = Sum of first n natural numbers.
sol:-
int sum (int n){
    if(n ==0){
        return 0;
    }
    return n + sum(n-1);
}
int sum_rec(int n , int m){
    if(m == 1){
        return sum(n);
    }
    int s = sum_rec(n,m-1);
    return sum(s);
}
int main(){
    int n ;
    cin>>n;
    cout<<endl;
    int m;
    cin>>m;
    cout<<sum_rec(n,m)<<endl;
    return 0;
}




Q3 - Given a number n which denotes the number of variables in the equation and a val which
denotes the sum of these variables, count the number of such non-negative integral solutions
that are possible.

(Medium)

Sample Input: n=5¬val=1
Sample Output:¬5
sol:-
int count(int n,int val)
{
    int ans = 0;
    if (n == 1 && val >=0) 
        return 1;
 
    
    for (int i = 0;i <= val; i++){
        ans += count(n-1, val-i);
    }
     
   
    return ans;
}
int main()
{
    int n,val;
    cout<<"Enter n and val : ";
    cin>>n;
    cin>>val;
    cout<<count(n,val)<<endl;
}
*/
