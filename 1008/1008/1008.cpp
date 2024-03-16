#include<iostream>
using namespace std;
int a[1001], n, ok = 0,k;
bool kbit1()
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
		{
			dem++;
		}
	}
	if (dem == k) return true;
	else return false;
}
void in()
{
	if (kbit1() == true)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
}
void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		a[i] = j;
		if (i == n)
		{
			ok = 1;
			in();
		}
		else Try(i + 1);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n>>k;
		while (ok == 0)
		{
			Try(1);
		}
		ok = 0;
	}
}