#include<iostream>
using namespace std;
enum Color{
	black=0,white=200,silver=300,red=900
	};

int main()
{
	Color col=white;
	cout<<"Value="<<col<<endl;
	
	cout<<"select color: 1:black 2:white 3:silver 4:red ";
	int ch;
	cin>>ch;
	switch(ch){
		case 1:col=black;
		       cout<<"Selected Color=Black with "<<col<<endl;
		break;
		case 2:col=white;
		       cout<<"Selected Color=white with "<<col<<endl;
		break;
		case 3:col=silver;
		       cout<<"Selected Color=silver with "<<col<<endl;
		break;
		case 4:col=red;
		       cout<<"Selected Color=red with "<<col<<endl;
		break;
		default:cout<<"invalid"<<endl;
	}
	
	return 0;
}
