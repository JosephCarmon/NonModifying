/*
 * NonModifying.cpp
 *
 *  Created on: Mar 17, 2021
 *      Author: Joe
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

bool cmp_string(string sValue1, string sValue2)
{
    if( sValue1.size() == sValue2.size())
	return true;
    else
    	return false;

}

int main ()
{

	srand(time(0));


	unsigned short int iRandom = rand() % 100;

	cout << iRandom << endl;

	//count
	unsigned short int iCount[] = {5,7,3,89,4,2,7,9,0,3,4,2,1};

	unsigned short int iCount_5 = count(iCount, iCount+13, 5);

	vector<int> iVector(iCount,iCount+12);

	unsigned short int iCount_1 = count(iVector.begin(), iVector.end(), 1);

	cout << "count " << iCount_1 << endl;

	//Equal
	unsigned short int iEqual[] = { 1,2,3,4,5,6,7,8};
	unsigned short int iEqual2[] = { 1,2,3,4,5,6,7,8};

	vector<int> iVector1(iEqual,iEqual+8);
	vector<int> iVector2(iEqual2, iEqual2+8);

	cout << "equal " << equal(iVector1.begin(), iVector1.end(), iVector2.begin()) << endl;

	string sString[] = {"abc", "def","gtf","hyt"};
	string sString2[] = {"bcd"};

	cout << " Equal 2 " << equal(sString, sString+3, sString2, cmp_string) << endl;

     //mismatch
	unsigned short int iMismatch[] = {4,3,4,5,6,7,8,6,5};
	unsigned short int iMismatch2[] = {0,4,3,4,5,6,7,6,5};

	vector<int> iMismatchVector1(iMismatch, iMismatch+9);
	vector<int> iMismatchVector2(iMismatch2, iMismatch2+9);

	pair<vector<int>::iterator, vector<int>::iterator> position;

	position = mismatch(iMismatchVector1.begin(),iMismatchVector1.end(),iMismatchVector2.begin()+2);

	cout << *position.first << " :  " << *position.second;

	//position = mismatch(iMismatchVector1.begin(),iMismatchVector1.end(),iMismatchVector2.begin()+2,cmp_string);

	//search
	unsigned short int iSearch[] = {1,2,3,4,5,6,7,8};
	unsigned short int iSearch2[] = {2,3,4};

	vector<int> iVector_1(iSearch, iSearch+9);
	vector<int> iVector_2(iSearch2, iSearch2+3);

	vector<int>::iterator iSearchIterator1,iSearchIterator2;

	iSearchIterator1 = search(iVector_1.begin(),iVector_1.end(), iVector_2.begin(), iVector_2.end());

	iSearchIterator2 = search(iVector_1.begin()+2, iVector_1.end(), iVector_2.begin(), iVector_2.end());


    return 0;
}
