#include <iostream>
using namespace std;

int main()
{
    int num,position;
    cin>>num>>position;
    int* number = new int[num];
    for (int i = 0; i < num; i++)
    {
       if (!(i%2))
        cin>>number[i+1];    
    }

     for (int j = 0; j < num; j++)
    {
       if (j%2)
        cin>>number[((num/2)+(num%2)+1)+j];    
    }

    cout<<number[position];
    delete[]number;
    number= NULL;
    
    return 0;
}
