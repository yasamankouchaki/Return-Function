//switch case for(factoriel,power,fibonachi,multiply)
#include<iostream>
using namespace std;
int fact(int n)
{
 if (n == 1)
 {
  return 1;
 }
 else {
  return n * fact(n - 1);
 }
}
int pow(int a, int b)
{
 if (b == 0)
 {
  return 1;
 }
 else {
  return a * pow(a,b- 1);
 }
}
int fibo(int n)
{
 if (n == 1 || n == 0)
 {
  return 1;
 }
 else {
  return fibo(n - 1) + fibo(n - 2);
 }
}
int mul(int a, int b){
   if(b==0){
   return 0;
}
   return a+mul(a,b-1);
}
struct Calculatur{
    int lv,rv;
    char op;
    void run(){
        cout <<"enter oparatore:";
        cin>>op;
        switch(op){
        case '!':
            cin>>lv;
            cout<<fact(lv);
            break;
        case '^':
            cin>>lv>>rv;
            cout<<pow(lv,rv);
            break;
        case 'f':
            cin>>lv;
            cout<<fibo(lv);
            break;
        case '*':
            cin>>lv>>rv;
            cout<< mul(lv,rv);
            break;
        }
    }
};

int main()
{
    Calculatur c;
    c.run();
    return 0;
}

