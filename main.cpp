// Jesus Gutierrez

#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<climits>
#include "funcs.cpp"
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::queue;
using std::cerr;


void printStat(const vector<int> &A);
bool findRange(const vector<int> &A, int k);
void countOccurrences(const vector<int> &A, int k);
void countOccLarge(const vector<int> &A, int k);
bool areIdentical(const vector<int> &A, const vector<int> &B);
bool isPalindrome(const vector<int> &A);
bool isSubarray(const vector<int> &A, const vector<int> &B);
int partitionAround(vector<int> &A, double k);
bool areIdenticalNotSorted(const vector<int> &A, const vector<int> &B);
void mergeKqueues(vector<queue<int> > &A, vector<int> &result);

void print(const vector<int> &A){
	int size = (int)A.size();
	for(int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}


int main(){
	string command;
	while(cin >> command){
		if(command == "printStat"){
			int size;
			cin >> size;
			vector<int> A;
			for(int i = 0; i < size; i++)
			{	int x;
				cin >> x;
				A.push_back(x);
			}//for
			cout << "Array: " << endl;
			print(A);
			cout << "Min, max, average:" << endl;
			printStat(A);
		}//printStat
		else if(command == "findRange"){
			int size, k;
			cin >> size >> k;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			bool success = findRange(A, k);
			print(A);
			if(success)
				cout << k << " is greater than the range." << endl;
			else
				cout << k << " is NOT greater than the range." << endl;
		}//if findRange
		else if(command == "countOccurrences"){ //countOccurrences
			int size, k;
			cin >> size >> k;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			print(A);
			countOccurrences(A, k);
		}//if countOccurrences
		else if(command == "countOccLarge"){
			int size, k;
			cin >> size >> k;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			//print(A);
			cout << "Results of count occurrences of large integers:" << endl;
			countOccLarge(A, k);
		}//if countOccLarge
		else if(command == "areIdentical"){
			int size, sizeB;
			cin >> size >> sizeB ;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			vector<int> B;
			for(int i = 0; i < sizeB; i++){
				int x;
				cin >> x;
				B.push_back(x);
			}//for
			bool res = areIdentical(A, B);
			cout << "Size of A is " << size << ", size of B is " << sizeB << ", testing whether A and B are identical:" << endl;
			if(res)
				cout << "A and B are identical." << endl;
			else
				cout << "A and B are NOT identical." << endl;

		}//if areIdentical
		else if(command == "isPalindrome"){
			int size;
			cin >> size ;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			
			bool res = isPalindrome(A);
			print(A);
			if(res)
				cout << "A is a palindrome." << endl;
			else
				cout << "A is NOT a palindrome." << endl;

		}//if areIdentical
		else if(command == "isSubarray"){
			int size, sizeB;
			cin >> size >> sizeB ;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			vector<int> B;
			for(int i = 0; i < sizeB; i++){
				int x;
				cin >> x;
				B.push_back(x);
			}//for
			bool res = isSubarray(A, B);
			cout << "Checking if A is a subarray of B; A and B are:" << endl;
			print(A);
			print(B);
			if(res)
				cout << "A is a subarray of B." << endl;
			else
				cout << "A is NOT a subarray of B." << endl;

		}//if isSubarray
		else if(command == "partitionAround"){
			int size;
			double k;
			cin >> size >> k;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			cout << "Input array A is:" << endl;
			print(A);
			partitionAround(A, k);
			cout << "After partitioning of A around " << k << ", A is:" << endl;
			print(A);

		}//if partitionAround
		else if(command == "areIdenticalNotSorted"){
			int size, sizeB;
			cin >> size >> sizeB ;
			vector<int> A;
			for(int i = 0; i < size; i++){
				int x;
				cin >> x;
				A.push_back(x);
			}//for
			vector<int> B;
			for(int i = 0; i < sizeB; i++){
				int x;
				cin >> x;
				B.push_back(x);
			}//for
			cout << "Checking if not sorted A and B are identical; A and B are:" << endl;
			print(A);
			print(B);
			bool res = areIdenticalNotSorted(A, B);
			if(res)
				cout << "Not sorted A and B are identical." << endl;
			else
				cout << "Not sorted A and B are NOT identical." << endl;

		}//if areIdenticalNotSorted
		else if(command == "mergeKqueues"){
			int k;
			cin >> k;
			vector<queue<int> > A(k);
			for(int j = 0; j < k; j++){
				int size;
				cin >> size ;
				queue<int> v;
				for(int i = 0; i < size; i++){
					int x;
					cin >> x;
					v.push(x);
				}//for
				A[j] = v;
			}//for
			vector<int> result;
			mergeKqueues(A, result);
			cout << "After merging of " << k << " queues, the resulting vector is:" << endl;
			print(result);
		}//mergeKqueues
		else{
			cerr << "ERROR: the command " << command << " is not valid." << endl;
			exit(0);
		}
	}//while

}//main()
// Jesus Gutierrez
