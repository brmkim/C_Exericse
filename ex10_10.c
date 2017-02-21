#include <stdio.h>
#define LEN 4

void addElem(int arr1[], int arr2[], int sumArr[], int len);
void showArr(int arr[], int len);
void addElemPtr(int * arr1, int * arr2, int * sumArr, int len);

int main(void)
{
  int arr1[LEN] = {2, 4, 5, 8};
  int arr2[LEN] = {1, 0, 4, 6};
  int sumArr[LEN];
  
  //addElem(arr1, arr2, sumArr, LEN);
  addElemPtr(arr1, arr2, sumArr, LEN);
  showArr(sumArr, LEN);
  
  return 0;
}
void addElem(int arr1[], int arr2[], int sumArr[], int len)
{
  int i;
  
  for (i = 0; i < len; i++)
    sumArr[i] = arr1[i] + arr2[i];
  
}

void showArr(int arr[], int len)
{
  int i;
  
  for (i = 0; i < len; i++)
    printf("%d ", arr[i]);
    
  puts("");
}

// pointer version
void addElemPtr(int * arr1, int * arr2, int * sumArr, int len)
{
   int i;
   for (i = 0; i < len; i++)
      *(sumArr + i) = *(arr1 + i) + *(arr2 + i);
}