#include <iostream>
using namespace std;

/*
��װһ������������ð������ʵ�ֶ������������������
�������飺int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
 */

// ð��������
void bubble (int* arr, int len)
{
 for (int i = 0; i < len - 1; i++)
 {
  for (int j = 0; j < len - 1 - i; j++)
  {
   if (arr[j] > arr[j+1])
   {
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
   }
  }
 }
}

// ��ӡ���麯��
void prints (int* arr, int len)
{
 for (int i = 0; i < len; i ++)
 {
  if (i < len - 1)
  {
   cout << arr[i] << ", ";
  }
  else
  {
   cout << arr[i] << endl;
  }
 }

}
// ������
int main()
{
 int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

 int len  = sizeof(arr) / sizeof(arr[0]);

 cout << "����ǰ���飺";
 prints(arr, len);

 bubble (arr, len);

 cout << "��������飺";
 prints (arr, len);
}