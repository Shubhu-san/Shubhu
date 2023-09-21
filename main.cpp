#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int addnum(int num1, int num2)
{
  int multiple = num1 * num2;
  return multiple;
}

int main()
{

  /*
  //for loop
  // for (int i=0; i<10; i++)
  // {
  //     std::cout << "Shubhu" << i << std::endl;
  // }
  */

  /*
  //input number
  int number1;
  std::cout << "Enter first number: ";
  std::cin >> number1;

  int number2;
  std::cout << "Enter second number: ";
  std::cin >> number2;

  int num3 = 5;

  std::cout << "number is " << num3 << std::endl;
  std::cout << "The sum of the numbers entered is " << addnum(number1,number2) << std::endl;
  */

  /*
  //get value of a whole line in a single variable
  std::string name;
  int age;

  std::cout << "Enter your name and age" << std::endl;
  std::getline(std::cin,name);
  std::cin >> age;

  std::cout << "Hello " << name <<" you are " << age << " years old" << std::endl;
  */
  /*
  // signed and unsigned
  unsigned int num1 = 10; // only +ve numbers
  signed int num2 = -10;  // both -ve and +ve numbers
  std::cout << "num1 " << num1 <<" num2 " << num2  << std::endl;
  */

  /*
  //Converting char ascii value
  char val = 'A';
  std::cout << "65 is " << val << std::endl;
  std::cout << "A is " << static_cast<int>(val) << std::endl;
  */

  /*
  //Getting boolean value as true/false using boolalpha
  int num1 = 40;
  int num2 = 42;
  std::cout << "Comparing variables" << std::endl;
  std::cout << std::boolalpha;
   bool res = (num1 == num2);
//   std::cout << "num1 > num2: " << (num1 > num2) << std::endl;
  std::cout << "num1 > num2: " << res << std::endl;
  */

  //  int n = std::log(54.59);
  // std::cout << "power is: " << std::exp(10) << std::endl;

  /*
  //switch case
  int input;
  std::cout << " Enter a number: ";
  std::cin >> input;
  switch ( input)
  {
  case 1: {
    std::cout << "Your num is 1" << std::endl;
    break;
  }

  case 2: {
    std::cout << "Your num is 2" << std::endl;
    break;
  }

  case 3: {
    std::cout << "Your num is 3" << std::endl;
    break;
  }

  default: {
    std::cout << "Your number is " << input << std::endl;
  }
  }
  */

  /*
  // ternary operator
   int input1;
   std::cout << " Enter first number: ";
   std::cin >> input1;

   int input2;
   std::cout << " Enter second number: ";
   std::cin >> input2;

   int result = ( input1 > input2 ) ? input1 : input2 ;
   std::cout << "The number which is greater is " << result << std::endl;
   */

  /*
  //for loop
  int input;
   std::cout << " Enter a number: ";
   std::cin >> input;
   for ( int i ; i <= input ; i++)
   {
     std::cout << "Hello world !" << i << std::endl;
   }
  */

  /*
  //while loop
  int input;
   std::cout << " Enter a number: ";
   std::cin >> input;
   int i= 0 ;
   while ( i <= input )
   {
     std::cout << "Hello world ! " << i << std::endl;
     i++;
   }
   */

  /*
  //do while loop
  int input;
   std::cout << " Enter a number: ";
   std::cin >> input;
   int i = 0 ;
   do
   {
     std::cout << "Hello world ! " << i << std::endl;
     i++;
   }
   while ( i <= input );
   */

  /*
  //Array and print array with ranged based for loop
  int arr_size;
  std::cout << " Enter the size of the array: ";
  std::cin >> arr_size;

  int arr[arr_size];
  int arr_val;

  for (int i=0 ; i < arr_size; i++)
  {
    std::cout << " Enter the value of index [" << i << "] of the array: ";
    std::cin >> arr_val;
    arr[i] = arr_val;
  }
  int sum=0;
  for (auto val : arr)
  {
    std::cout << "array: " << val << std::endl;
    sum+= val;
  }
  std::cout << "total array: " << sum << std::endl;
  */

  /*
  //char array
  char msg[] = {'H','E','L','L','O','\0'};
  std::cout << "message: " << msg << std::endl;
  */
  /*
  int num = 45;
  int* p_num = &num;
  // referencing a pointer
  std::cout << "Pointer of " << num << " is " << p_num << std::endl;
  // Dereferencing a pointer
  std::cout << "Pointer " << p_num << " is referencing to " << *p_num << std::endl;
  */

  // char *char_var = "Hello World";
  // std::cout << "char " << *char_var << std::endl;

  //  for (int i = 0; i < 10000000; i++)
  //  {
  //   try{
  //     int* data = new int[100000000];
  //   }
  //   catch(std::exception& ex){
  //     std::cout << "Error " << ex.what() << std::endl;
  //   }
  //  }

  string str;
  cout << "Enter string: ";
  cin >> str;
  reverse(str.begin(), str.end());
  cout << str << endl;
}