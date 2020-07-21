#include <iostream>
using namespace std;

void sum(int[], int[],int);
void subtract(int[], int[]);
unsigned long long int conv(int [],int );
int inputt(int );
void multiply(unsigned long long int ,int [],int  );
int main()
{
    while (true)
    {
        char a;

        //INPUTING COMMAND

        cout << endl
             << "Select the operation to be performed by entering the corresponding character" << endl
             << "a. Add" << endl
             << "b. Subtraction" << endl
             << "c. Multiply" << endl
             << "d. Divide" << endl
             << "e. Power" << endl
             << "f. Modulas" << endl
             << "g. Exit" << endl;
        
        cin >> a;
        if (a == 'g')
        {
            break;
        }
        cout<<"Enter the length of first and second number:"<<endl;
        int s_of_1n;
        cin>>s_of_1n;
        if (s_of_1n>15)
        {   
            
            cout<<"Max-limit is upto 15-digits "<<endl;
            continue;
        }
        
        
        int i;
        int arr[s_of_1n], arrr[s_of_1n];

        //INPUTTING AND ADDING BY ENVOKING FUNCTION

        if (a == 'a')
        {
        //    int c1=0;
        //    int c2=0;
            
            cout << "\nEnter the first number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arr[i];
                
               
              
            }
            
            cout << "\nEnter the second number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arrr[i];
                
            }
           
               
              sum(arr, arrr,s_of_1n);
           
           
            
        }

        else if (a == 'b')
        {
          
             cout << "\nEnter the first number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arr[i];
                
               
              
            }
            
            cout << "\nEnter the second number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arrr[i];
                
            }
            subtract(arr,arrr);
        }

        else if (a == 'c')
        {

            cout << "\nEnter the first number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arr[i];
                
               
              
            }
            
            cout << "\nEnter the second number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arrr[i];
                
            }
         unsigned long long int n1=conv(arr,s_of_1n);
          multiply(n1,arrr,s_of_1n);
        }
        else if (a == 'd')
        {

            double a, b, c;
            cout << "Enter the Divisor" << endl;
            cin >> a;
            cout << "Enterthe divident" << endl;
            cin >> b;
            c = a / b;
            cout << "The result is " << c;
        }
        else if (a == 'e')
        {
            double a, d;
            int b;
            char c;
            cout << "Enter any number" << endl;
            cin >> a;
            cout << "Enter its power" << endl;
            cin >> b;
            c = 1;
            d = a;
            while (c <= b - 1)
            {
                d = d * a;
                c = c + 1;
            }
            cout << "The result is " << d;
        }
        else if (a == 'f')
        {
            unsigned long long int a,b,c;
            cout << "\nEnter the first number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arr[i];
                
               
              
            }
            
            cout << "\nEnter the second number one by one by pressing enter.\n";
            for (i = 0; i < s_of_1n ; i++)
            {
                cin >> arrr[i];
                
            }
            a=conv(arr,s_of_1n);
            b=conv(arrr,s_of_1n);
            c = a % b;
            cout << "The result is " << c;
        }
        
        else
        {
            cout << "Incorrect input" << endl;
        }

    }
return 0;
}

//ADDITION FUNCTION

void sum(int b[], int c[],int count)
{
    int i;
    int summ[count];
    int carry = 0;
    for (i = count-1; i >= 0; i--)
    {
        //PROCESSING
        summ[i] = b[i] + c[i] + carry;
        carry = 0;
        if (summ[i] > 9)
        {
            summ[i] = summ[i] - 10;
            carry = 1;
        }
    }

    //OUTPUT
    cout << "Your result is ";
    for (i = 0; i < count; i++)
    {
        cout << summ[i];
    }
}

//SUBTRACTING FUNCTION

void subtract(int b[], int c[])
{
    int i;
    int summ[15];
  
    for (i = 14; i >= 0; i--)
    {
        //PROCESSING
        if(b[i]>=c[i]){
        summ[i] = b[i] - c[i];    
        }
        else{
          b[i]=b[i]+10;
        summ[i] = b[i] - c[i];
        b[i-1]--;          
        }
       
    }

    //OUTPUT
    cout << "Your result is ";
    for (i = 0; i < 15; i++)
    {
        cout << summ[i];
    }
}
// Convert
unsigned long long int conv(int arr[],int count)
{
    int i;
    unsigned long long int num=0,z=1;
    for(i=count-1; i>=0;i--)
    {
        num=num+(arr[i]*z);
        z=z*10;
    }
    return num;
}

// Multiplication 
void multiply(unsigned long long int n1,int arrr[],int s_of_1n){
  int sum=0;
  int z=1;
  cout<<n1<<endl;
  for (int  i = s_of_1n - 1; i >=0; i--)
  {
      sum=sum + (n1*(arrr[i]*z));
      z=z*10;
  }
      cout<<"Result of Multiplication: "<<sum<<endl;
 
}
