#include <iostream>
#include<time.h>
#include<math.h>

using namespace std;

bool rrand(double num){
	double p = ((double)rand()) / RAND_MAX;
	if (p >= num){
		return false;
		cout << "�н�������" << endl;
	}
	else{
		return true;
		cout << "û�н����´�����" << endl;
	}
}

int main(){
	srand(time(0));
	for (int i = 0; i < 100; i++){
		if (rrand(0.1)){
			cout << "�н�" << endl;
		}
		else{
			cout << "û�н�" << endl;
		}
	}

}