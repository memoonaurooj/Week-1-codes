#include<iostream>
using namespace std;
int main()
{
	int QUESTIONNUMBER;
	cout<<"please enter a Question number you want to check"<<endl;
	cin>>QUESTIONNUMBER;
		switch(QUESTIONNUMBER)

	{
		case 1:
			{
			
			cout<<"program to calculate area of circle "<<endl;
			float r,area;
	cout<<"enter radius of circle";
	cin>>r;
	area=3.14*r*r;
	cout<<"area of the circle is"<<area;
			
			
	break;
}
	case 2:
		{
		cout<<"program to calculate area of square"<<endl;
		#include<iostream.h>
#include<conio.h>
void main()
{
int side, area;
cout<<"Enter the side of a square:";
cin>>side;
area=side*side;
cout<<"Area of a square is:";
cout<<area;
getch();
}

	
	break;
}
	case 3:
		{
			cout<<"program to calculate area of rectangle"<<endl;
			cout<<"enter length of rectangle in meters";
cin>>l;
cout<<"enter the width of rectangle in meters";
cin>>w;
area=l*w;
cout<<"the area of rectangle is"<<area<<"msq";
		
	break;
}
case 4:
	{
		cout<<"program that will swap with third variable"<<endl;
		int x,y,temp=0;
cout<<"enter two numbers ";
cin>>x>>y;
y=temp;
cout<<"the swapped numbers are "<<x<<"\t"<<y;
			
	break;
	}
	case 5:
		{
			cout<<"program that will swap without third variable "<<endl;
			int a, b;  
cout<<"enter two numbers";
cin>>a>>b;    
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a*b; //a=50 (5*10)    
b=a/b; //b=5 (50/10)    
a=a/b; //a=10 (50/5)    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
			
				break;
			}
		
		case 6:
			{
			cout<<"program that will check that the number is prime or not ";	
			int num;
bool isprime=true;
cout<<"enter positive integer";
cin>>num;
for(int i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
		isprime=false;
		break;
	}
}
if(isprime)
cout<<num<<"\tis prime number";
else
cout<<num<<"\tis not a prime number";
				
			
case 7:
	{
		cout<<"program to find reverse of number "<<endl;
		
		break;
	}
	case 8:
		cout<<"program to check that the number is palindrome or not "<<endl;
		  int arr[10], i;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
			break;
		}
		case 9:
			{
				cout<<"program to find factorial of a number "<<endl;
				 int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial; 
			
				break;
		}
		case 10:
			{
				cout<<"program to check the number is armstrong or not "<<endl;
				int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
			
				break;
		}
		case 11:
			{
				cout<<"program to print fibonancci series "<<endl;
				int n,a=0,b=1,c;
cout<<"Enter the number of terms to generate the fibonancci series";
cin>>n;
for(int i=1;i<=n;i++)
{
	
cout<<a<<" ";
c=a+b;
a=b;
b=c;
}
				
			
				break;
		}
		case 12:
			{
				cout<<"program to check that year is leap or not "<<endl;
				 int year;
  cout << "Enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400
  if (year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) {
    cout << year << " is a leap year.";
  }
  // all other years are not leap years
  else {
    cout << year << " is not a leap year.";
  }
			
				break;
		}
		case 13:
			{
				cout<<"program to convert days to years weeks and days "<<endl;
				int tot, days, weeks, months, years;
   cout<<"Enter Total Number of Days: ";
   cin>>tot;
   years = tot/365;
   months = (tot%365)/30;
   weeks = ((tot%365)%30)/7;
   days = ((tot%365)%30)%7;

   cout<<"\nYears: "<<years<<endl;
   cout<<"Months: "<<months<<endl;
   cout<<"Weeks: "<<weeks<<endl;
   cout<<"Days: "<<days<<endl;
   cout<<endl;
   return 0;
			
				break;
		}
		case 14:
			{
				cout<<"program to print multiplication table of given number "<<endl;
				char ch = tolower('A');

  cout << ch;

  return 0;
			
				break;
		}
		case 15:
			{
				cout<<"program to find sum of first and last digit of any number "<<endl;
				 int num, sum=0, firstDigit, lastDigit;
 
     //Reading a number from user
    cout<<"Enter any number:";
    cin>>num;
 
     lastDigit = num % 10;
 
    firstDigit = num;
 
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
 
     //Finding sum of first and last digit
    sum = firstDigit + lastDigit;
 
    cout<<"Sum of first and last digit: "<<sum;
 
    return 0;
			
				break;
		}
		case 16:
			{
				cout<<"program to find largest among three numbers "<<endl;
				int x,y,z;
	cout<<"enter numbers\t";
	cin>>x>>y>>z;
	if(x>y&&x>z)
	cout<<x<<" is largest";
	else if(y>z&&y>x)
	cout<<y<<"is largest number";
	else
	cout<<z<<"/tis largest number";
	
			
				break;
		}
		case 17:
			{
				cout<<"program to change string to upper case without stupr"<<endl;
			
				break;
		}
		case 18:
			{
				cout<<"program to change string to lower case without strlwr "<<endl;
				void functionlower(char []);
 
    int main()
    {
       char string[100];
 
       cout<<"Enter a string to convert it into lower case: "<<endl;
       cin>>string;
 
       functionlower(string); // calling functionlower
 
       cout<<"Entered string in lower case is: "<<string;
 
       return 0;
    }
 
    void functionlower(char s[]) {
       int c = 0;
 
       while (s[c] != '\0') {
          if (s[c] >= 'A' && s[c] <= 'Z') {
             s[c] = s[c] + 32;
          }
          c++;
       }
    }
			
				break;
		}
	}
	case 19:
		{
			cout<<"program"
			 void functionupper(char []);
 
    int main()
    {
       char string[100];
 
       cout<<"Enter a string to convert it into upper case"<<endl;
       cin>>string;
 
       functionupper(string); // calling functionupper
       cout<<"Entered string in upper case is: "<< string;
 
       return 0;
    }
 
    void functionupper(char s[]) {
       int c = 0;
 
       while (s[c] != '\0') {
          if (s[c] >= 'a' && s[c] <= 'z') {
             s[c] = s[c] - 32;
          }
          c++;
       }
    }
		}
	default:
		
		
		cout<<"your entered question number is not valid please enter a valid number";
	
	break;


