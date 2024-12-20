// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void g(){
    srand(time(0));
    int i = rand(), j = (i % 9) + 1;
    if(j == 1) cout << "A";
    else if(j == 2) cout << "B+";
    else if(j == 3) cout << "B";
    else if(j == 4) cout << "C+";
    else if(j == 5) cout << "C";
    else if(j == 6) cout << "D+";
    else if(j == 7) cout << "D";
    else if(j == 8) cout << "F";
    else cout << "W";
    
}

int main (){
	cout << "Press Enter 3 times to reveal your future.";
	cin.get();
	cin.get();
	cin.get();
	cout << "You will get ";
	g();
	cout << " in this 261102.";
	
	return 0;
}