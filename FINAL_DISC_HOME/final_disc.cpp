#include <iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int x1;
	cout << "enter type pf reading : \n 1: from file \n 2:from user \n";
	cin >> x1;

	if (x1 == 1) {
		int n1, n2;
		int* a = new int[32];
		int* b = new int[32];
		int array1[32];
		int array1_n[32];
		int array2_n[32];

		int array2[32];
		int array3[32];
		int* p = a;
		int* o = array3;
		char filename[50];
		cout << "enter file name \n";
		cin >> filename;
		ifstream file;
		file.open(filename, ios::in);

		if (file.is_open()) {
			file >> n1; //read nuber of var "set a" 

			for (int i = 0; i < n1; i++)
			{
				file >> a[i]; // read set a

			}
			file >> n2; //read nuber of var "set a" 

			for (int i = 0; i < n2; i++)
			{
				file >> b[i]; // read set a
			}

		}
		file.close();

		/*for (int i = 0; i < n1; i++) {
			cout << a[i]<<" ";
		}
		cout << endl;
		for (int j = 0; j < n2; j++) {
			cout << b[j]<<" ";
		}
		cout << endl; */

		int r = 0;
		for (int i = 0; i < 32; i++) {
			for (int j = 0; j < n1; j++) {
				if (*p == i) {
					r = 1;
					p++;
				}
				else {
					p++;
				}
			}
			if (r == 1)
			{
				array1[i ] = 1;
			}
			else array1[i ] = 0;
			r = 0;
			p = a;



		}
		for (int i = 0; i < 32; i++)
		{
			cout << array1[i] << " ";
		}
		cout << endl;
		p = b;
		int k = 0;
		for (int i = 0; i < 32; i++) {
			for (int j = 0; j < n2; j++) {
				if (*p == i) {
					k = 1;
					p++;
				}
				else {
					p++;
				}
			}
			if (k == 1)
			{
				array2[i ] = 1;
			}
			else array2[i ] = 0;
			k = 0;
			p = b;

		}
		for (int i = 0; i < 32; i++)
		{
			cout << array2[i] << " ";
		}

		int z;
		cout << " \n enter the Equation type : \n 1: a' intersection b' \n 2: a intersection b \n 3: a-b \n 4:m a xor b \n";
		cin >> z;

		if (z == 1) {
			cout << "(aUb)not :\t";
			for (int i = 0; i < 32; i++) {
				if (array1[i] == 1) {
					array1_n[i] = 0;
				}

				else {
					array1_n[i] = 1;

				}
			}
			for (int j = 0; j < 32; j++) {
				if (array2[j] == 1) {
					array2_n[j] = 0;
				}

				else {
					array2_n[j] = 1;
				}
			}


			for (int k = 0; k < 32; k++) {

				array3[k] = array1_n[k] && array2_n[k];

			}
			for (int k = 0; k < 32; k++) {

				cout << array3[k] << " ";

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}

			}

			for (int i = 0; i < 32; i++) {
				if (array3[i] != 0) {
					cout << array3[i] << " ";
				}
			}

		}


		if (z == 2) {    ////////////////ÊŞÇØÚ 
			int e = 0;
			for (int i = 0; i < 32; i++) {

				array3[i] = array1[i] && array2[i];

			}

			for (int i = 0; i < 32; i++) {


				cout << array3[i];

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}
		if (z == 3) {
			for (int j = 0; j < 32; j++) {
				if (array2[j] == 1) {
					array2_n[j] = 0;
				}

				else {
					array2_n[j] = 1;
				}
			}

			for (int k = 0; k < 32; k++) {

				array3[k] = array1[k] && array2_n[k];

			}
			for (int k = 0; k < 32; k++) {

				cout << array3[k];

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}
		if (z == 4) {
			for (int j = 0; j < 32; j++) {
				if ((array1[j] == 1 && array2[j] == 0) || (array1[j] == 0 && array2[j] == 1)) {
					array3[j] = 1;
				}
				else
					array3[j] = 0;
			}
			for (int j = 0; j < 32; j++) {
				cout << array3[j];
			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}




	}
	/***************************************************************************************************/
	if (x1 == 2) {
		int array1_n[32];
		int array2_n[32];
		int array2[32];
		int array3[32];
		int* a = new int[32];
		int* b = new int[32];
		int array1[32];

		int* p = a;


		cout << "enter size of set A  \n ";
		int n1;
		cin >> n1;
		cout << "enter size of set b  \n ";
		int n2;
		cin >> n2;
		cout << "enter value of set A   \n" << endl;


		for (int i = 0; i < n1; i++) {
			cin >> a[i];
		}
		cout << "enter value of set b  \n " << endl;

		for (int j = 0; j < n2; j++) {
			cin >> b[j];
		}
		int r = 0; //////////////////// ÊÍæíá áÈÇíäÇÑí 
		for (int i = 1; i <= 32; i++) {
			for (int j = 0; j < n1; j++) {
				if (*p == i) {
					r = 1;
					p++;
				}
				else {
					p++;
				}
			}
			if (r == 1)
			{
				array1[i - 1] = 1;
			}
			else array1[i - 1] = 0;
			r = 0;
			p = a;

		}
		for (int i = 0; i < 32; i++)
		{
			cout << array1[i] << " ";
		}
		cout << endl;
		p = b;
		int k = 0;
		for (int i = 1; i <= 32; i++) {
			for (int j = 0; j < n2; j++) {
				if (*p == i) {
					k = 1;
					p++;
				}
				else {
					p++;
				}
			}
			if (k == 1)
			{
				array2[i - 1] = 1;
			}
			else array2[i - 1] = 0;
			k = 0;
			p = b;

		}
		for (int i = 0; i < 32; i++)
		{
			cout << array2[i] << " ";
		}

		int z;
		cout << " \n enter the Equation type : \n 1: a' intersection b' \n 2: a intersection b \n 3: a-b \n 4:m a xor b \n ";
		cin >> z;

		if (z == 1) {
			//	cout << "a' intersection b' \n";
			for (int i = 0; i < 32; i++) {
				if (array1[i] == 1) {
					array1_n[i] = 0;
				}

				else {
					array1_n[i] = 1;

				}
			}
			for (int j = 0; j < 32; j++) {
				if (array2[j] == 1) {
					array2_n[j] = 0;
				}

				else {
					array2_n[j] = 1;
				}
			}


			for (int k = 0; k < 32; k++) {

				array3[k] = array1_n[k] && array2_n[k];

			}
			for (int k = 0; k < 32; k++) {

				cout << array3[k] << " ";

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}

			for (int i = 0; i < 32; i++) {
				cout << array3[i];
			}


		}


		if (z == 2) {    ////////////////ÊŞÇØÚ 
			int e = 0;
			//	cout << "intersection \n";
			for (int i = 0; i < 32; i++) {

				array3[i] = array1[i] && array2[i];

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}

		if (z == 3) {
			//	cout << "a intersection b' \n";
			for (int k = 0; k < 32; k++) {
				if (array2[k] == 1) {
					array2_n[k] = 0;
				}

				else {
					array2_n[k] = 1;
				}
			}

			for (int k = 0; k < 32; k++) {

				array3[k] = array1[k] && array2_n[k];

			}
			for (int k = 0; k < 32; k++) {

				cout << array3[k];

			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}
		if (z == 4) {
			//	cout << "a xor b \n";
			for (int j = 0; j < 32; j++) {
				if ((array1[j] == 1 && array2[j] == 0) || (array1[j] == 0 && array2[j] == 1)) {
					array3[j] = 1;
				}
				else
					array3[j] = 0;
			}
			for (int j = 0; j < 32; j++) {
				cout << array3[j];
			}
			cout << endl;
			for (int i = 0; i < 32; i++) {
				if (array3[i] == 1) {
					array3[i] = i;
				}
			}
			for (int i = 0; i < 32; i++) {
				cout << array3[i] << " ";
			}
		}
		cout << "\n";
	}
	/************************************************************************************************************/
	cout << "\n question 2 : ";
	int x;
	cout << "\n enter number of element of the set:  ";
	cin >> x;
	string* s = new string[x];
	string* p = s;
	if (x == 4) {
		cout << "\n enter the element\n";
		for (int i = 0; i < 4; i++) {
			cin >> p[i];
		}
		for (int i = 0; i < 1; i++) {
			if (p[i] == p[i + 1] || p[i] == p[i + 2] || p[i] == p[i + 3]) {
				cout << "{ }" << endl;
				cout << p[1] << "\n";
				cout << p[2] << "\n";
				cout << p[3] << "\n";


				cout << p[1] << "-" << p[2] << "\n";
				cout << p[1] << "-" << p[3] << "\n";
				cout << p[2] << "-" << p[1] << "\n";
				cout << p[2] << "-" << p[3] << "\n";
				cout << p[3] << "-" << p[1] << "\n";
				cout << p[3] << "-" << p[2] << "\n";
			}
			else if (p[i + 1] == p[i] || p[i + 1] == p[i + 2] || p[i + 1] == p[i + 3]) {
				cout << "{ }" << endl;
				cout << p[0] << "\n";
				cout << p[2] << "\n";
				cout << p[3] << "\n";

				cout << p[0] << "-" << p[2] << "\n";
				cout << p[0] << "-" << p[3] << "\n";

				cout << p[2] << "-" << p[0] << "\n";
				cout << p[2] << "-" << p[3] << "\n";
				cout << p[3] << "-" << p[0] << "\n";
				cout << p[3] << "-" << p[2] << "\n";


			}
			else if (p[i + 2] == p[i] || p[i + 2] == p[i + 1] || p[i + 2] == p[i + 3]) {
				cout << "{ }" << endl;
				cout << p[0] << "\n";
				cout << p[1] << "\n";
				cout << p[3] << "\n";

				cout << p[0] << "-" << p[1] << "\n";
				cout << p[0] << "-" << p[3] << "\n";
				cout << p[1] << "-" << p[0] << "\n";
				cout << p[1] << "-" << p[3] << "\n";

				cout << p[3] << "-" << p[0] << "\n";
				cout << p[3] << "-" << p[1] << "\n";
			}
			else if (p[i + 3] == p[i] || p[i + 3] == p[i + 1] || p[i + 3] == p[i + 2]) {
				cout << "{ }" << endl;
				cout << p[0] << "\n";
				cout << p[1] << "\n";
				cout << p[2] << "\n";

				cout << p[0] << "-" << p[1] << "\n";
				cout << p[0] << "-" << p[2] << "\n";
				cout << p[1] << "-" << p[0] << "\n";
				cout << p[1] << "-" << p[2] << "\n";
				cout << p[2] << "-" << p[0] << "\n";
				cout << p[2] << "-" << p[1] << "\n";
				cout << p[2] << "-" << p[3] << "\n";

			}

			cout << "{ }" << endl;
			cout << p[0] << "\n";
			cout << p[1] << "\n";
			cout << p[2] << "\n";
			cout << p[3] << "\n";

			cout << p[0] << "-" << p[1] << "\n";
			cout << p[0] << "-" << p[2] << "\n";
			cout << p[0] << "-" << p[3] << "\n";
			cout << p[1] << "-" << p[0] << "\n";
			cout << p[1] << "-" << p[2] << "\n";
			cout << p[1] << "-" << p[3] << "\n";
			cout << p[2] << "-" << p[0] << "\n";
			cout << p[2] << "-" << p[1] << "\n";
			cout << p[2] << "-" << p[3] << "\n";
			cout << p[3] << "-" << p[0] << "\n";
			cout << p[3] << "-" << p[1] << "\n";
			cout << p[3] << "-" << p[2] << "\n";

		}

	}
	if (x == 3) {
		cout << "enter the element\n";
		for (int i = 0; i < 3; i++) {
			cin >> p[i];
		}
		for (int i = 0; i < 1; i++) {
			if (p[i] == p[i + 1] || p[i] == p[i + 2]) {
				cout << "{ }" << endl;
				cout << p[1] << "\n";
				cout << p[2] << "\n";


				cout << p[1] << "-" << p[2] << "\n";

			}
			else if (p[i + 1] == p[i] || p[i + 1] == p[i + 2]) {
				cout << "{ }" << endl;
				cout << p[0] << "\n";
				cout << p[2] << "\n";


				cout << p[0] << "-" << p[2] << "\n";

			}
			else if (p[i + 2] == p[i] || p[i + 2] == p[i + 1]) {
				cout << "{ }" << endl;
				cout << p[0] << "\n";
				cout << p[1] << "\n";


				cout << p[0] << "-" << p[1] << "\n";

			}
			cout << "{ }" << endl;
			cout << p[0] << "\n";
			cout << p[1] << "\n";
			cout << p[2] << "\n";

			cout << p[0] << "-" << p[1] << "\n";
			cout << p[0] << "-" << p[2] << "\n";

			cout << p[1] << "-" << p[0] << "\n";
			cout << p[1] << "-" << p[2] << "\n";

			cout << p[2] << "-" << p[0] << "\n";
			cout << p[2] << "-" << p[1] << "\n";
		}



	}


	if (x == 2) {
		cout << "enter the element\n";

		for (int i = 0; i < 2; i++) {
			cin >> p[i];
		}
		for (int i = 0; i < 1; i++) {
			if (p[i] == p[i + 1]) {

				cout << "{ }" << "\n";
				cout << p[0] << "\n";
			}
			else if (p[i + 1] == p[i]) {
				cout << "{ }" << "\n";
				cout << p[1] << "\n";
			}

			else {
				cout << "{ }" << "\n";
				cout << p[0] << "\n";
				cout << p[1] << "\n";

				cout << p[0] << "-" << p[1] << "\n";
			}
		}




	}


	if (x == 1) {
		cout << "enter the element\n";

		for (int i = 0; i < 2; i++) {
			cin >> p[i];
		}

		cout << "{ }" << "\n";
		cout << p[0] << "\n";




	}
}