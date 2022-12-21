# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama	      	: Adi purnama
<br>NIM		        :1227050004
<br>Jurusan     	:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
    Program array 2 dimensi C++, Membuat matriks dan merubah letak dan nilai baris menjadi kolom,kolom menjadi baris. dan
    Program Array deret aritmatika yang tidak bisa dibagi 3, 5, 7 
## Source Code

````C++
//1.Program array 2 dimensi, Membuat matriks dan merubah letak dan nilai baris menjadi kolom,kolom menjadi baris.
#include <iostream>
 
using namespace std;

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


//2. Deret matematika bilangan yang tidak habis dibagi 3, 5, 7 
#include <iostream>
using namespace std;
  
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
}```

## Output
![Screenshot (42)](https://user-images.githubusercontent.com/121074868/208886759-b3478416-16cc-41cb-a8c1-cbb771c5a3d7.png)
