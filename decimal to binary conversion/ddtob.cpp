/*#include<iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binary[32];  // Assuming a 32-bit integer, you can adjust this based on your needs
    int index = 0;

    while (decimalNumber > 0) {
        binary[index] = decimalNumber & 1;
        decimalNumber = decimalNumber >> 1;
        index++;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}
*/


//deci to b

/*#include<iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binary[32];  // Assuming a 32-bit integer, you can adjust this based on your needs
    int index = 0;

    if (decimalNumber < 0) {
        // Handling negative numbers using two's complement
        decimalNumber = -decimalNumber;
        int carry = 1;

        while (decimalNumber > 0 || carry) {
            binary[index] = (~(decimalNumber & 1) + carry) & 1;
            carry = (decimalNumber & 1) | (carry & 1);
            decimalNumber = decimalNumber >> 1;
            index++;
        }
    } else {
        // Handling positive numbers
        while (decimalNumber > 0) {
            binary[index] = decimalNumber & 1;
            decimalNumber = decimalNumber >> 1;
            index++;
        }
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}
*/




/*//deci to b
#include<iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    if (decimalNumber == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binary[32];  // Assuming a 32-bit integer, you can adjust this based on your needs
    int index = 0;

    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        index++;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}*/





/*//btodeci
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n;
cout<<"enter the number:"<<endl;
cin>>n;
int i=0,ans=0;
while(n!=0){
int digit=n%10;
  if(digit==1){
  ans=ans+pow(2,i); 
  }n=n/10;
  i++;
}
cout<<ans<<endl;
}*/




/*//d to b
#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}*/








/*//switch statement infinite loop case
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a choice (0 to exit): ";
    cin >> choice;

    bool exitLoop = false;
    while (!exitLoop) {
        switch (choice) {
            case 1:
                cout << "Performing Case 1 logic..." << endl;
                break;
            case 2:
                cout << "Performing Case 2 logic..." << endl;
                break;
            case 0:
                exitLoop = true;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        // Get the next choice from the user
        cout << "Enter a choice (0 to exit): ";
        cin >> choice;
    }

    cout << "Exited the loop." << endl;

    return 0;
}
*/









