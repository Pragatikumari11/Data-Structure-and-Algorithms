/*#include <iostream>
using namespace std;
int main()
{ int a,b;
cout<<"Enter first number:"<<endl;
cin>>a;
cout<<"Enter second number:"<<endl;
cin>>b;
char op;
cout<<"Enter the operation:"<<endl;
cin>>op;
switch(op){
    case '+': cout<<a+b<<endl;
              break;
    case '-': cout<<a-b<<endl;
              break;
    case '*': cout<<a*b<<endl;
              break;
    case '%': cout<<a%b<<endl;
              break;
    case '/': cout<<a/b<<endl;
              break;
    default:cout<<"Enter the valid operation"<<endl;

}
}*/











/*
#include <iostream>
using namespace std;
int main(){
int amount;
cout<<"enter the amount:"<<endl;
cin>>amount;
int newamount=amount;
    
while(newamount>0)
{
 switch(newamount){
case 100:amount=newamount/100;
      cout<<"no. pf 100 notes:"<<amount<<endl;
      amount=newamount%100;
      newamount=amount;
break;
case 50:amount=newamount/50;
      cout<<"no. pf 50 notes:"<<amount<<endl;
      amount=newamount%50;
      newamount=amount;
break;
case 20:amount=newamount/20;
      cout<<"no. pf 20 notes:"<<amount<<endl;
      amount=newamount%20;
      newamount=amount;

break;
case 10:amount=newamount/10;
      cout<<"no. pf 10 notes:"<<amount<<endl;
      amount=newamount%10;
      newamount=amount;
break;
}
}}*/










/*
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int remainingAmount = amount;

    int num100Notes = 0;
    int num50Notes = 0;
    int num20Notes = 0;
    int num10Notes = 0;

    while (remainingAmount > 0) {
        switch (remainingAmount) {
            case 100:
                num100Notes++;
                remainingAmount -= 100;
                break;
            case 50:
                num50Notes++;
                remainingAmount -= 50;
                break;
            case 20:
                num20Notes++;
                remainingAmount -= 20;
                break;
            case 10:
                num10Notes++;
                remainingAmount -= 10;
                break;
            default:
                // If none of the exact denominations match, try combinations
                if (remainingAmount >= 100) {
                    num100Notes++;
                    remainingAmount -= 100;
                } else if (remainingAmount >= 50) {
                    num50Notes++;
                    remainingAmount -= 50;
                } else if (remainingAmount >= 20) {
                    num20Notes++;
                    remainingAmount -= 20;
                } else if (remainingAmount >= 10) {
                    num10Notes++;
                    remainingAmount -= 10;
                } else {
                    cout << "Cannot find the combination of notes." << endl;
                    return 1;  // Exit the program with an error code
                }
        }
    }

    cout << "Number of 100 notes: " << num100Notes << endl;
    cout << "Number of 50 notes: " << num50Notes << endl;
    cout << "Number of 20 notes: " << num20Notes << endl;
    cout << "Number of 10 notes: " << num10Notes << endl;

    return 0;
}
*/







