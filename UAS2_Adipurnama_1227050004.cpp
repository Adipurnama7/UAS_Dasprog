#include <iostream>
using namespace std;
//2. deret matematika bilangan yang tidak habis dibagi 3, 5, 7, input baris pertama merupakan banyaknya baris (0-20) baris kedua merupakan banyaknya kolom.
  
int main(){
  int matriks[20][20];
  int jum_baris, jum_kolom, i, j;
  cout<<"Nama : Adi purnama"<<endl;
  cout<<"NIM  : 1227050004"<<endl;
  cout<<"=================================\n";
  
  //input jumlah
  cout << "Input jumlah baris matriks: ";
  cin >> jum_baris;
  cout << "Input jumlah kolom matriks: ";
  cin >> jum_kolom;
  cout << endl;
  
 
  // input nilai
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
 
  // menampilkan mariks
  cout << "Hasil matriks: " << endl;
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << matriks[i][j] << " ";
    }
    cout << endl;
    }
    cout<<endl;
    cout<<"Hasil Akhir\n";
    for (int i = 0; i <jum_baris;i++){
    	for (int j = 0; j < jum_kolom; j++ ){
    		if (matriks[i][j] % 3 != 0 && matriks[i][j] % 5 !=0  && matriks[i][j] %7 !=0){
    			cout<<matriks[i][j]<<" ";
			}
			else {
			}
		}
	}
}
