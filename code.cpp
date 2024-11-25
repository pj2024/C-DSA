#include <iostream>
using namespace std;

// to compile : g++ -o code filename.cpp
// to run : ./filename.exe


int main(){

    // cout<< "Hello World\n";
    // cout<< "My Name is Prathamesh" <<endl;

    // ########## VARIABLE ###########
    // Variable is a container to store a data









    // ########## Data Types ###########

    // ############### PREMETIVE DATA TYPES ###############
    // int          $4 bytes$

    int age = 22;
    // cout << "My Age is :" << age << endl;

    // char     $1 bytes$       
    
    char grade = 'O';
    // cout << "My grade is: " << grade << endl;
    
    // float         $4 bytes$

    float PI = 3.14f;
    // cout << PI <<endl;
    // bool         $1 bytes$

    bool isSafe = true;
    // cout << isSafe <<endl; // 1 or 0
    // double        $8 bytes$

    double num = 10.2893;
    // cout << num << endl;










    // ######################## TYPE CASTING ###########################
    // Converting data from one type to another

    // ############## CONVERTION ###################
    // implicit --> automatically
    // samll --> big
    // float 3.14 --> double 3.14
    // 4 bytes --> 8 bytes

    char grade1 = 'A'; //65 a --> 97
    // 1 byte --> 4bytes automatically
    int value = grade1;
    // cout << value <<endl;

    // ############## CASTING ################
    // explicit --> manually
    //  big --> samll 
    //   double 3.14 --> float 3.14
     //  8 bytes  --> 4 bytes

     double num1 = 100.245;
    //  8 bytes --> 4 bytes manually 
     int num2 = (int)num1;
    //  cout<< num2 << endl;










    // ################# INPUT IN CPP #####################
    // cin , cout are the global objects


    int age1;
    // cout << "Enter the age: ";
    // cin >> age1;
    // cout << "Your age is : "<< age1 << endl;
    



    // ################# OPERATORS #####################

    // ############# ARITHMETIC OPERATORS #################
    // +, -, *, /, %
    int a = 16;
    int b = 5;
    // int / int --> int
    // if we want to take answer in proper way then 
    // int / float --> float
    // int / double --> double
    // float / int --> float
    // double / int --> double
    // this is applicable on all the operators

    // cout << "Addition is : "<< (a + b) << endl;
    // cout << "Subtraction is : "<< (a - b) << endl;
    // cout << "Multipication is : "<< (a * b) << endl;
    // cout << "Division is : "<< (a / b) << endl;
    // cout << "Modulo is : "<< (a % b) << endl;
    
    // ############# RELATIONAL OPERATORS #################
    // <, >, <=, >=, ==
    // cout << (10 > 5) << endl;  // true --> 1 
    // cout << (10 < 5) << endl; //fasle --> 0
    // cout << (10 <= 5) << endl; //fasle --> 0
    // cout << (10 >= 5) << endl; //true --> 1
    // cout << (10 == 5) << endl; //fasle --> 0
    // cout << (10 != 5) << endl; //true --> 1


    // ############# LOGICAL OPERATORS #################
    // !, &&, ||

    // cout << (10 < 20) && (10 > 5) ; // true --> 1 if T && T --> T all other F --> 0

    // cout << (10 < 5) || (10 > 20); F || F --> F all others are T --> 1

    // cout << !(10 > 5); //F --> T  and T --> F  



    // #################### UNARY OPERATORS ##########################

    // INCREMENT ++

    int num5 =  10;
    // cout<< num5 << endl; // 10
    num5++;
    // cout<< num5 << endl; // 11

    int num6 = 10;
    int num7 = ++num6;
    // cout<< num7 << endl;  // 11
    // cout<< num6 << endl;  // 11
    
    // DECREMENT --
    int num8 =  10;
    // cout<< num8 << endl; // 10
    num8--;
    // cout<< num8 << endl; // 9

    int num9 = 10;
    int num10 = --num9;
    // cout<< num10 << endl;  // 9
    // cout<< num9 << endl;  // 9











    // ################# SUM OF TWO NUMBERS

    int num3;
    // cout << "Enter first Number : ";
    // cin >> num3 ;
    int num4;
    // cout << "Enter second Number : ";
    // cin >> num4 ;

    int sum1 = num3 + num4;

    // cout << sum1;



    // ################# CALCULATOR PROGRAM ######################

    int number1;
    cout << "Enter first Number : ";
    cin >> number1;
    int number2;
    cout << "Enter second Number : ";
    cin >> number2;

    cout << "Addition of " << number1 << " and " << number2 << " is : " << (number1 + number2) << endl;
    cout << "Subtraction of " << number1 << " and " << number2 << " is : " << (number1 - number2) << endl;
    cout << "Multiplication of " << number1 << " and " << number2 << " is : " << (number1 * number2) << endl;
    cout << "Division of " << number1 << " and " << number2 << " is : " << (number1 / number2) << endl;
    cout << "Modulo of " << number1 << " and " << number2 << " is : " << (number1 % number2) << endl;


    return 0;
}