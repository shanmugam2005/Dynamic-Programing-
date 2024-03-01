
#include <bits/stdc++.h>
using namespace std;
int m=0;
void towerOfHanoi(int n, char from_rod, char to_rod,
				char aux_rod)
{
	if (n == 0) {
		return;
	}
	m++;
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod
		<< " to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);

}

int main()
{
	int N;
	cin>>N;


	towerOfHanoi(N, 'A', 'C', 'B');
	cout<<endl;
	cout<<"The number of moves takes place is "<<m;
	cout<<endl;
	return 0;
}


