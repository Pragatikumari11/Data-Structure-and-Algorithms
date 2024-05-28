#include <iostream>
using namespace std;
int main(){//sum of odd num.
int num;
cout<<"Enter the number:"<<endl;
cin>>num;
int i=2,sum=0,temp;
while(i<num)
{
temp=num%i;
if(temp==0){
    cout<<"number is not prime"<<endl;
    break;
}

else {
    cout<<"number is prime"<<endl;
    break;
}i+=i;
}
}
/*int main() {//C to F conversion
    double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    while (fahrenheit >= -459.67) {  // Absolute zero in Fahrenheit
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius." <<endl;

        // Get the next temperature from the user
        std::cout << "Enter another temperature in Fahrenheit (or enter a value less than -459.67 to exit): ";
        std::cin >> fahrenheit;
    }

    std::cout << "Exiting the program. Stay warm!" << std::endl;

    return 0;
}*/
