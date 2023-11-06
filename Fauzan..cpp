#include <iostream>
using namespace std;
int main(){
	int baris,kolom,atas;
	
	cout <<"Masukan jumlah kolom : ";
	cin>>kolom;
	
	cout <<"Masukan jumlah garis : ";
	cin>>baris;
	
	cout<<"Masukan jumlah penutup : ";
	cin>>atas;
		for(int C= 1; C<=atas; C++){
		cout<<" __ ";
	}
	cout<<endl;
	
	for(int A= 1; A<=baris; A++){
		for(int B= 1; B<=kolom; B++){
			cout<<"|__|";
		}		
		cout<<endl;
	}	

	return 0;
}

