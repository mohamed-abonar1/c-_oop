#include <iostream>
using namespace std;
void max(int num)
{
    int Size;
    int arr[Size];
    cin>>Size;
    for(int  i =0 ; i < Size ; i++)
    {
      cin>>arr[i];

    }
    int max = arr[0];
    for(int  i =0 ; i <Size ; i++)
    {
          if(arr[i]>max)
          {
            max = arr[i];
          }
    }
    cout<< max;


}
int main()
{
    int num ;
    cin>>num;
    max(num);
}
