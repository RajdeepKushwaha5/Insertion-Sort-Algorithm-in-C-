#include <iostream>
using namespace std;

int main()
{
  int arr[1000];
  int index;
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  cout << " Enter elements with space between them:";

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }



  for (int j = 1; j < n; j++)
  {
    for (int k = j; k > 0; k--)
    {
      if (arr[k] < arr[k - 1])
      {
        swap(arr[k], arr[k - 1]);
      }
      else
      {
        break;
      }
    }
  }

  for (int l = 0; l < n; l++)
  {
    cout << arr[l] << " | ";
  }
  return 0;
  
}
