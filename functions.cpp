// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//      ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cout<<"Enter a and b"<<endl;
//     cin>>a>>b;
// int save=power(a,b);
// cout<<"Ans is "<<save;
//  return 0;

// }

// #include<iostream>
// using namespace std;
// int functionName(int a ,int b){
//     int c=a*b;
//     return c;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b ";
//     cin>>a>>b;
//     int ans=functionName(a,b);
//     cout<<"Ans is "<<ans;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void CheckEvenOdd(int num){
//     if(num%2==0){
//         cout<<"No is even "<<endl;
//     }
//     else{
//         cout<<"No is odd "<<endl;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter Number ";
//     cin>>num;
//     CheckEvenOdd(num);
// }

// #include<iostream>
// using namespace std;
// void functionName(int x,int y){
//     x=24,y=20;
//    cout<<x+y<<endl;
// }
// int main(){
// int x,y;
// functionName(x,y);
// }

// //Wap using function
// #include<iostream>
// using namespace std;
// bool isEven(int a){
//      if(a&1){
//       return 0;
//      }
//      else{
//       return 1;
//      }
// }
// int main(){
//     int num;
//     cin>>num;
//    if (isEven(num)){
// cout<<"Even"<<endl;
//    }
// else{
//   cout<<"Odd"<<endl;
// }
  
// }

//prime no
// #include<iostream>
// using namespace std;
//  int main(){
//   int isPrime=true;
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;
//   for(int i=2;i<n;i++){
//   if(n%i==0){
//     isPrime=0;
//     break;
//   }
//   }
//   if(isPrime==0){
//     cout<<"not prime"<<endl;
//   }
//   else{
//     cout<<" prime"<<endl;
//   }
//   }
 

 /*
// prime no using function
#include<iostream>
using namespace std;
int isPrime(int num){
  for(int i=2;i<num;i++){
    if(num%i==0){
      return 0;
      break;
    }
    if(num%i!=0){
      return 0;
    }
    else{
      return 1;
    }
}
}
int main(){
  int num;
  cout<<"Enter num: "<<endl;
  cin>>num;
  if (isPrime(num)){
    cout<<num<<" is not a prime no"<<endl;
  }
else{
  cout<<num<<" is a prime no";
}
}
*/

// #include<iostream>
// using namespace std;
// void printCount(int n){
// for(int i=1;i<=n;i++){
// cout<<i<<endl;
// }
//  }
// int main(){
//   int n;
//   cout<<"Enter n :";
//   cin>>n;
//   printCount(n);
// }

/*
// WAP to find nCr
#include<iostream>
using namespace std;
int factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
 fact=fact*i;
  }
  return fact;
}

int factorialf(int f){
  int fact=1;
  for(int i=1;i<=f;i++){
    fact=fact*i;
  }
  return fact;
}

int factorialnumMinusr(int numMinusr){
  int fact=1;
  for(int i=1;i<=numMinusr;i++){
    fact=fact*i;
  }
  return fact;
}

int main(){
  int num;
  cout<<"Enter n :";
  cin>>num;
  int nFactorial=factorial(num);
  cout<<"factorial of "<<num<<" is "<<nFactorial<<endl;;

  int f;
  cout<<"Enter f :";
  cin>>f;
  int fFactorial=factorialf(f);
  cout<<"factorial of "<<f<<" is "<<endl;

int numMinusr=num-f;
int nMr=factorialnumMinusr(numMinusr);
cout<<"factorial of "<<num<<'-'<<f<<" is "<<nMr<<endl;

cout<<"Factorial of nCf is "<<nFactorial/((nMr)*fFactorial);
}
*/



// ##################### Pass by Value ################################################
// #include<iostream>
// using namespace std;
// int PassbyValue(int a){
//   a=a/2;
//   return a;
// }
// int main(){
//   int a=10;
//  PassbyValue(a);
//   cout<<a<<endl;
// }

// ################################# Practice ###########################

/*
#include<iostream>
using namespace std;
int AP(int n){
 int ap=(3*n)+7;
 return ap;
}
int main(){
  int nthTerm;
  cout<<"Enter nthTerm: ";
  cin>>nthTerm;
  int save=AP(nthTerm);
  cout<<save<<endl;

}
*/

#include<iostream>
using namespace std;

int fibo(int a,int b,int c){
  int c=a+b;
for(int i=3;i<=n;i++){
a=b;
b=c;
c=a+b;
}
return 1;



}
int main(){
  int a=0,b=1,c;
  c=a+b;

}
























































































// #include<iostream>
// using namespace std;
// int main(){
//     string str="Hare Krishna";
//     for(int i=0;i<=str.length();i++){
//         if(str[i]=='a'){ //here it escape a 
//             continue;
//         }
//         else{
//         cout<<str[i]<<endl;
//         }
//     }  
// }