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

  for (int j = 0; j < n - 1; j++)
  {
    index = j;

    for (int k = j + 1; k < n; k++)
    {
      if (arr[k] < arr[index])
      {
        index = k;
      }
    }
    swap(arr[index], arr[j]);
  }
  for (int l = 0; l < n; l++)
  {
    cout << arr[l] << " | ";
  }

  return 0;
}
