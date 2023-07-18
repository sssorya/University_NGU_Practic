#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a[3000];
    int i, n, nm;

    cout << "press the number" << "\n";
    cin >> n;
    for (i = 1; i <= n; i++) {
        a[i] = rand() % 401 - 200;
        cout << a[i] << " ";
    }
    cout << "\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
2*#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *mas_a, i, n=10,num;

void pechat(int length)
{
printf("\n Printing array length %d\n", dlina);
for (int i=0; i<dlina; i++)
printf(" %d", mas_a[i]);
printf("\n");
}

void mas_ins(int* mas_a,int k)
{
for(int i=n; i>=k; i--)
{
mas_a[i+1]=mas_a[i];
length(n+1);

}
}
int main()
{

printf("filling randomly\n\n");
mas_a = (int *) malloc (10*n*sizeof(int));
srand(time(NULL));
for (i=0;i<n;i++)
{
num=rand() %10 +1;
mas_a[i]=num;
printf("%d\n",mas_a[i]);
}

int k;
printf("enter the number of the element");
scanf("%d",&k);
//
mas_ins(mas_a,k);
//
legth(n+1);

mas_a[k]=100;

legth(n+1);

getch();
return 0;
}
3*#include <iostream> 
#include <string>
using namespace std;
void delElem(int *arr,int len,int &newsize)
{
    int *buff;
    int delsum = 0;//кол-во удаляемых елементов
    int lenbuff;//длина buff
    int j = 0;
 
    for(int i = 1,r = 0; i<len; i++)//!i = 1
    {
        if(arr[i] > arr[r])
        {
            r++;
            delsum++;   //увеличить четчик
        }
    }
 
    lenbuff = len - delsum;//задаем длину buff
    buff = new int[lenbuff];//выделяем память
 
    buff[0] = arr[0];//первый елемент всегда проходит;
    j++;
    for(int i = 1,r = 0; i<len; i++)//!i = 0
    {
        if(arr[i]>arr[r])
        {
            buff[j] = arr[i];//копируем
            j++;
            r++;
        }
    }
    delete[] arr;
    arr = new int[lenbuff];
    newsize = lenbuff;
    for(int i = 0; i< lenbuff; ++i)
        arr[i] = buff[i];
 
    delete[] buff;
}
int main(void)  
{
    int *arr    = new int[9];
    int ar_size = 0;
    //1 2 5 6 3 4 4 5 9
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 3;
    arr[5] = 4;
    arr[6] = 4;
    arr[7] = 5;
    arr[8] = 9;
    delElem(arr,9,ar_size);
    cout<<"[ ";
    for(int i = 0; i < ar_size; i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
    return 0;
} 
4*#include <iostream> 
using namespace std; 
int main(){ 
int n; 
cin » n; 
int *mass = new int[n]; 
for(int i = 0; i < n; i++) 
{ 
mass[i] = rand() % 100; 
cout « mass[i]«" "; 
} 
int i; 
cout « endl; 
cin » i; 
for (int i2 = 0; i2 < n; i2++) 
{ 
if (i2 == i) { 
for (int i3 = i2-1; i3 < n; i3++) 
{ 
cout « i3; 
mass[i3] = mass[i3 + 1]; 
} 
} 
} 
n = n - 1; 
for (int i = 0; i < n; i++) 
{ 
cout « mass[i]«" "; 
} 
system("pause"); 
return 0; 
}
