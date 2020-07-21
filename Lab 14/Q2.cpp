#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ascending(int *array,int a){

   cout<<"Changing in ascending order"<<endl;
   sort(array, array + a);

}

double avgg(int *array, int n)
{
    // int *p = &array[0];
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(array + i);
    }

    double avg = sum /double(n) ;
    return avg;
}

int main()
{
    int a;
    cout << "Enter the length of arrays\n";
    cin >> a;
    // int array[a];
    int *arrayPointer = new int;
    cout << "Enter the value one by one\n";
    for (int i = 0; i < a; i++)
    {
        cin >> *(arrayPointer+i);
    }

   ascending(arrayPointer,a);
    
    for (int i = 0; i < a; i++)
    {
        cout << *(arrayPointer+i) << endl;
    }
    double avg = avgg(arrayPointer, a);

    cout << "Average is " << avg << endl;
}
