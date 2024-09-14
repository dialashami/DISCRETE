#include <iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
string* v;
string* term;
string* word;

//void read(string filename) {
//	ifstream file;
//	string* word1 ;
//	file.open(filename.c_str());
//	while (file >> *word1) { //take word and print
//		word= word1;
//	}
//	file.close();
//}

void func(string s) {
	string y = "";
	for (auto x : s) {
		if (x == ' ') {
			//cout << y << "\n";
			y = "";
		}
		else {
			y = y + x;
		}
		/*term[x] = y;*/
	}


}


int  func1(string d) {
	for (int i = 0; i < sizeof(v[i]); i++) {
		if (d == v[i]) {
			return i;
		}
		return -1;
	}
}

int* p = new int[64];
int* o;
void func2(int n) {
	for (int i = 0; i < sizeof(p); i++) {
		int z = 1;
		for (int j = 0; j < n; j++) {
			z *= p[j];

		}
		o[i] = z;
		z = 1;


	}
}


int main()
{

	//int* orarr;
	int z = 0;
	int w = 0;
	int n{};                  //number of variable
	//	string* v;                 //name of var
	int c, c1;                  // number of Clauses 
	//string* word;

	int matrix[16][4] = { (0,0,0,0) , (0,0,0,1) , (0,0,1,0) , (0,0,1,1) , (0,1,0,0) , (0,1,0,1) , (0,1,1,0),(0,1,1,1) , (1,0,0,0) , (1,0,0,1) , (1,0,1,0) , (1,0,1,1) , (1,1,0,0) , (1,1,0,1) , (1,1,1,0) , (1,1,1,1) };

	char filename[50];

	while (1) {
		cout << "1. enter name of file:\n";
		cout << "2. Read expression from a file.\n";
		cout << "3. Display all assignments that makes the output TRUE.\n";
		cout << "4. Exit.\n";
		cout << " choose number :\n";
		int x;
		cin >> x;
		if (x == 1) {
			cout << "enter file name:\n";
			cin >> filename;
			ifstream file;
			file.open(filename, ios::in);
			file >> n; //read the number of var 

			v = new string[n]; //full the dynmic array with size number of var
			for (int i = 0; i < n; i++)
			{
				file >> v[i]; // read name of var
			}

			file >> c;                     // read numer of clauses
			term = new string[100];
			while (!file.eof())
			{
			
                  getline(file , term[w]);
				  cout << "***" << term[w]<<endl;

				w++;
				////////////////////////////////////////////////////////////////////////
				
			}
			
file.close();
			

		}
		/*for (int i = 0; i < sizeof(term); i++)
		{
			cout << term[i] << " ";
		}*/
			cout << "1. enter name of file:\n";
			cout << "2. Read expression from a file.\n";
			cout << "3. Display all assignments that makes the output TRUE.\n";
			cout << "4. Exit.\n";
			cout << " choose number :\n";
		cin >> x;
		if (x == 2) {
			/*for (int i = 0; i < w; i++) {
				func(array[w]);
				cout << array[i] << "\n" << " ";//print the tearms

			}
			for (int k = 0; k < sizeof(array[k]); k++) {
				for (int j = 0; j < n; j++) {
					if ((array[k] == v[j])) {
						int r;
						r = 0 || matrix[k][j];
						array++;
						if (array[k] == "not") {
							if ((array[k] == v[j])) {
								int r;
								r = 0 || matrix[k][j];
							}


						}
						cout << r;
					}


				}*/
			int s1;

			for (int i = 0; i < sizeof(term[i]); i++) {
			/*	if (term[i] == ".") {
					n++;
				}*/
				for (int j = 0; j < pow(2, n); j++) {
					for (int m = 0; m < sizeof(term[m]); m++) {
						while (term[m] != ".") {
							/*	else {
									if (func1(array[m + 1]) != -1)
									{
										//int s1;
										s1 = s1 || !(matrix[j][func1(array[m + 1])]);
									}
									else
										m++;

								}*/
							if (term[m] != "not") {
								if (func1(term[m]) != -1) {
									if (term[m - 1] == "not" && m != 0) {
										m++;
										continue;
									}
									//	int s1;
									s1 = s1 || (matrix[j][func1(term[m])]);
									m++;
								}
								else
									m++;
							}
							else {
								if (func1(term[m + 1]) != -1)
								{
									//int s1;
									s1 = s1 || !(matrix[j][func1(term[m + 1])]);
									m++;
								}
								else
									m++;

							}

						}
						p[i] = s1;
					}
				}
				/*for (int i = 0; i < 24; i++)
				{
					cout << p[i] << " ";
				}*/
				/*if (array[m] == "not") {
								if (func1(array[m + 1]) != -1)
								{
									//int s1;
									s1 = s1 || !(matrix[j][func1(array[m + 1])]);
								}
								else
									m++;

							}
							else {
								if (func1(array[m + 1]) != -1) {
									if (array[m - 1] == "not" && m != 0) {
										m++;
									}
								//	int s1;
									s1 = s1 || (matrix[j][func1(array[m])]); m++;
								}
								else
									m++;
							}*/
				func2(n);


			}
			cout << "1. enter name of file:\n";
			cout << "2. Read expression from a file.\n";
			cout << "3. Display all assignments that makes the output TRUE.\n";
			cout << "4. Exit.\n";
			cout << " choose number :\n";
		}
		cin >> x;
		if (x == 3) {
			for (int j = 0; j < n; j++) {
				cout << v[j] << " ";
			}
			cout << endl;
			for (int j = 0; j < pow(2, n); j++) {
				if (o[j]) {
					for (int k = 0; k < n; k++) {
						cout << matrix[j][k];
					}
					cout << endl;
				}
			}
		}
		if (x == 4) {
			cout << "wrong option";
		}
		return 0;
	}
}