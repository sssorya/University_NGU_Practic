#include <iostream>
#include <conio.h>

//#define INT_MAX 2147483647 done yet.
#define numb 1200

using namespace std;

int GetCrrg (unsigned int *a) {
	int i,crrg=0;
	for (i=numb-1; i>=0; i--) { if (a[i]!=0) { crrg=i; break; } }
return crrg;
}

int Processing (unsigned int *a, int b) {
	int i,crrg=0,check=0,j;
	crrg=GetCrrg(a);
	//getch();
	for (i=0; i<=crrg; i++)	{
		a[i]*=b;
		//cout << " " << (int)a[i];
	}
	//cout << endl;
	//getch();
	//cout << "\ncrrg=" << crrg << endl;
	for (i=GetCrrg(a); i>=0; i--) { if (a[i]>9) {check=1; i=0; break;} }
	//cout << "\n!" << (int)a[2] << (int)a[1] << (int)a[0] << "!\n";
	while (check) {
		if (a[i]>9) {
			a[i+1]+=a[i]/10;
			a[i]=a[i]%10;
		}
		i++;
		check=0;
		for (j=GetCrrg(a); j>=0; j--) { if (a[j]>9) {check=1; break;} }
		if (i>=numb) return -1;
	}
	//cout << "\n!" << (int)a[2] << (int)a[1] << (int)a[0] << "!\n";
	//for (i=GetCrrg(a); i>=0; i--) {cout << (int)a[i];}
return 0;
}

int main () {
	unsigned int a[numb];
	int i,f,crrg;
	for (i=0; i<numb; i++) a[i] = 0; a[0]=1;
	//for (i=numb-1; i>-1; i--) cout << a[i]; getch();
	//cout << GetCrrg(a);
	do {
	cin >> f;
	for (i=1; i<=f; i++) {
		if (Processing(a,i) == -1) return -1;
	}
	cout << "\n\n";
	for (i=GetCrrg(a); i>=0; i--) {cout << (int)a[i];}
	cout << endl;
	for (i=0; i<numb; i++) a[i] = 0; a[0]=1;
	} while (f!=-1); 
return 0;
}
