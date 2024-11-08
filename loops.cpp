// #include<iostream>//preprocessor directive to include the input/output stream header file
// #include<cmath>
// using namespace std;//using the standard namespace to avoid writing std:: 

// int main(){


    
  /*  int n;
    cout<<"enter the evalue of n"<<endl;
    cin>>n;   //initialization,condition,updation
    for(int i=1;i<=n;i++){
    cout<<i<<endl;
   } 
   */

/*
for(int a=0,b=1;a<=0 && b<=1;a--,b--){
    cout<<a<<" "<<b<<endl;//infinite loop
} 
*/

/*
//WAP to fins sum of 1 to n
 int sum=0;
int n;
cout<<"Enter the value of n: ";
cin>>n;
for(int i=1;i<=n;i++){
  sum=sum+i;
}
    cout<<" "<<sum;
    */

// //Fibonacci series
// int a=0;
// int b=1;
// cout<<" "<<a<<" "<<b;
// for(int i=1;i<=10;i++){
//     int c=a+b;
//     cout<<" "<<c;
//    a=b;
//    b=c;
// }
 
 /*
 //WAP to find whether a no is prime or not
int n;
cout<<"Enter n: "<<endl;
cin>>n;
bool isPrime=1;
for(int i=2;i<n;i++){
    if(n%i==0){
        // cout<<"It is not a prime no";
        isPrime=0;
        break;
    }
}
if(isPrime==0){
    cout<<"not prime";
}
else{
    cout<<"It is prime";
}
*/

// // //continue
// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<=10;i++){
//     cout<<"Hare Krishna"<<endl;
//     cout<<"Hare Ram"<<endl;
//     continue;
//     cout<<"Material songs..";
// }
// }

  

// for(int i=0;i<=15;i+=2){
//     cout<<i<<" ";
//     if(i&1){
//         continue;
//     }
//     i++;
// }

// for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++){
//         if(i+j==10){
//             break;
//         }
//         cout<<i<<" "<<j<<endl;
//     }
// }

/*
//WAP to find the sub of producrt-addition of digits of given no
int n;
cin>>n;
int prod=1;
int sum=0;
while(n!=0){
    int rem=n%10;
    prod=prod*rem;
    sum=sum+rem;
    n=n/10;
}
int res=prod-sum;
cout<<res;
*/

/*
//WAP to print a reverse no of given no
int n;//123
cout<<"Enter no to be reversed:";
cin>>n;
// while(n!=0){
//   int rem=n%10;
//  int store=rem;
//   n=n/10;
//   cout<<store;
// }
*/

/*
//WAP to find to find first 10 natural numbers
for(int i=1;i<=10;i++){
    cout<<i<<endl;
}
*/

/*
//sum of first 10 natural numbers
int sum=0;
for(int i=0;i<=10;i++){
    sum=sum+i;
}
   cout<<sum;
*/

/*
//sum of n even natural numbers
int n;
cin>>n;
int sum=0;
for(int i=2;i<=n;i++){
    if(i%2==0){
        sum=sum+i;
    }
}
cout<<sum;
*/

/*
//WAP to know no is even or odd using break
int n;
cin>>n;
bool isEven=1;
for(int i=2;i++;i<=n){
   if(i%2!=0) {
    isEven=0;
    break;
   }
}
if(isEven==0){
    cout<<"It is even";
}
else{
    cout<<"It is odd";
}
*/


//check whether the no is perfect no or not--

/*
//WAP for Prime no
int n;
cout<<"Enter a no:";
cin>>n;
bool isPrime=1;
for(int i=2;i<n;i++){
    if(n%i==0){
        isPrime=0;
        break;
    }
}
if(isPrime==0){
    cout<<" it is not a prime no";
}
else{
    cout<<" It is prime no";
}
*/

//WAP to find a prime no with a range.input no  for starting range is 1 and ending range:100


/*
//WAP to find the factorial of a number
int n;
cout<<"Enter n : ";
cin>>n;
int x=1;
for(int i=1;i<=n;i++){
   x=x*i;
}
   cout<<x;
*/

//WAP to find the last prime no that occurs before the entered no

/*
//WAP to print decimal to binary
int n;
cout<<"Enter n:";
cin>>n;
int ans=0;
int i=0;
while(n!=0){
    int bit=n&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
}
cout<<"Answer is "<<ans;
*/


// //WAP to print same no
// int  n;
// cout<<"Enter n:";
// cin>>n;
// int ans=0;
// int i=0;
// while(n!=0){
//     int rem=n%10;
//     ans=(rem*pow(10,i))+ans;
//  i=i+1;
//     n=n/10;
// }
// cout<<ans;
// }

//++++++++++++++++++++++++++++++++++Questions++++++++++++++++++++++++++++++++++++++++


// //1.WAP to print reverse no of a given no
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no:";
//     cin>>n;
//     int ans=0;
//     int i;
//     while(n>0){
//         int rem=n%10; //to find the remainder
//         ans=(ans*10)+rem;  //to store remainder
//         n=n/10;
//         i++;
//     }
//     cout<<ans;
// }


/*
//2.convert decimal to binary(using while loop)
#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int mul=1;
    int n;
    cin>>n;
    while(n>0){
    int rem=n%2;//int bit=n&1;
    n/=2;    //   n=n>>1;
    ans+=(rem*mul);
    mul*=10;
    }
    cout<<ans;
}
*/

//3.convert decimal to binary(using for loop)

//4.WAP to check whether a no is is palindrome or not

// //WAP to decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int ans=0;
//      int i=1;
//     while(n>0){
//         int bit=(n&1);
//          ans=(bit*i)+ans;
//         n=n>>1;
//        i=i*10; 
       
//     }
//     cout<<ans;
// }

// //WAP to print reverse no as given
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int rem=n%10;
//         ans=(ans*10)+rem;
//         n=n/10;
//         i++;

//     }
//     cout<<ans;
// }



// //WAP to print a -ve decimal  to binary....
// #include<iostream>
// using namespace std;                     //................most imp question***
// int main(){
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     int ans=0;
//     int i=1;
//     while(n!=0){
//         int bit=n&1;
//         ans=((bit)*i)+ans;
//         n=n>>1;
//         i=i*10;
//     }
//     cout<<ans<<endl;
// }


// //WAp to convert binary to decimal
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int digit=(n%10);
//        ans=ans+(digit*pow(2,i));
//         n=n/10;
//         i++;
        
//     }
//     cout<<ans;
// }

//+++++++++++++++++++++++Switch()++++++++++++++++++++++++++++++++
// #include<iostream>
// using namespace std;
// int main(){
// char ch;
// cout<<"Enter you character ";   //you can take only characters and integers to access cases
// cin>>ch;                         //break after every cases
// switch(ch){
//     case 'a':cout<<"This is your case "<<ch<<endl;
//     break;
//     case 'b':cout<<"This is your case b"<<endl;
//     break;
//     case 'c':int num;
//              cout<<"Enter number "<<endl;
//              cin>>num;
//              switch(num){
//              case 1:cout<<"You have entered  "<<num<<endl;
//              break;
//              case 2:cout<<"You have entered  "<<num<<endl;
//              break;
//              case 3:cout<<"You have entered "<<num<<endl;
//              break;
//              default:cout<<"Sorry you can only enter no upto 3"<<endl;
//               }
//                  exit(0);
//     default:
//     cout<<"sorry you can't enter d"<<endl;
// }

// }


//Simple Calculator
// #include<iostream>
// using namespace std;
// int main(){
//     char symbol;
//     cout<<"Enter case :";
//     cin>>symbol;
//     int a,b;
//     cout<<"Enter a ";
//     cin>>a;
//     cout<<"Enter b ";
//     cin>>b;
//     switch(symbol){
// case '+':cout<<"Addition is "<<a+b<<endl;
// break;
// case '-':cout<<"Substraction is "<<a-b<<endl;
// break;
// case '*':cout<<"Multiplication is "<<a*b<<endl;
// break;
// case '/':cout<<"Division is "<<a/b<<endl;
// default:cout<<"not valid"<<endl;      
//     }
// }

// #################################################################


// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"-";

//         }
//         for(int j=0;j<(i*2)+1;j++){
//             cout<<"*";
//         }
        
//         for(int j=0;j<n-i-1;j++){
//             cout<<"-";
//         } 
//         cout<<endl;

//     }
// }
// ---------*---------
// --------***--------
// -------*****-------
// ------*******------
// -----*********-----
// ----***********----
// ---*************---
// --***************--
// -*****************-
// *******************