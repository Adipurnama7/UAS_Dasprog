#include <iostream>
 
using namespace std;
//1. input banyaknya baris dan kolom array 2 dimensi , isi dengan nilai, stelah di isi, di ubah baris menjadi kolom, kolom menjadi baris 
 
int main()
{
  int matriks[50][50];
  int matriks2[50][50];
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
 
  // menampilkan array
  cout << "Matriks: " << endl;
  for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << matriks[i][j] << " ";
    }
    cout << endl;
    }
    
  	for(i = 0; i < jum_baris ; i++){
  	  for(j = 0; j < jum_kolom; j++){
    	matriks2 [j][i] = matriks [i][j]; 
    }
	cout<<endl;
	}
	//menampilkan hasil tukar array
	cout<<"Hasil Tukar Matriks\n";
	for(i = 0; i < jum_kolom ; i++){
    	for(j = 0; j < jum_baris ; j++){
      cout<< matriks2[i][j] << " ";
 	}
 	cout<<endl;
	}
  return 0;
}


//soal uas 

//1. input banyaknya baris dan kolom array dimensi 2, isi dengan nilai, stelah di isi di ubah baris menjadi kolom, kolom menjadi baris 

//2. deret matematika bilangan yang tidak habis dibagi 3, 5, 7, input baris pertama merupakan banyaknya baris (0-20) baris kedua merupakan banyaknya kolom,  
