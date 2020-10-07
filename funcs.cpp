// Jesus Gutierrez

#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<climits>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::queue;
using std::cerr;



void printStat(const vector<int> &A){

	int max = A[0];
	int min =A[0];
	int temp_avg = 0;
	int sizeOfVec = A.size();
	for(int i = 0; i < sizeOfVec; i++)
			{	
				if (A[i] > max){
					max = A[i];
				}//get Max


				if (A[i] < min){
					min = A[i];
				}//get Min

				temp_avg = temp_avg + A[i];
			}//for

	double avg_sum = temp_avg; //int needs to be double
	double avg_sizeOfVec = sizeOfVec; //int needs to be double

	double avg = avg_sum/avg_sizeOfVec;

	cout << min << " " << max << " " << avg  << endl;


}

bool findRange(const vector<int> &A, int k){

	// for getting Min and Max
	int max = A[0];
	int min =A[0];
	int sizeOfVec = A.size();
	for(int i = 0; i < sizeOfVec; i++)
			{	
				if (A[i] > max){
					max = A[i];
				}//get Max


				if (A[i] < min){
					min = A[i];
				}//get Min

			}//for
		int range = max - min + 1;
		if(k > range){
			return true; 
		}
		else{

			return false;
		}



}

void countOccurrences(const vector<int> &A, int k){

	// Create a vector of size k with 
    // all values as 10. 
    vector<int> C(k,0); 

    int sizeOfVec = A.size();
  
	for(int i = 0; i < sizeOfVec; i++){
		if(C[A[i]]==0){
			C[A[i]]=1;
		}
		else{
			C[A[i]] = C[A[i]]+1;
		}
	}
	int sizeOfC=C.size();
	for(int i = 0; i < sizeOfC; i++){
		if (C[i] != 0){
		cout << i<<" "<< C[i] << endl;
		}

	}


	


}

void countOccLarge(const vector<int> &A, int k){
	
	int max = A[0];
	int min =A[0];
	int sizeOfA = A.size();

	vector<int> C(k,0); // count vector

	for(int i = 0; i < sizeOfA; i++)
			{	
				if (A[i] > max){
					max = A[i];
				}//get Max


				if (A[i] < min){
					min = A[i];
				}//get Min


			}//for

	//int range = max - min + 1;

	//we subtract the min from each number in index
	for(int i = 0; i < sizeOfA; i++)
			{	
				if(C[A[i]-min]==0){
					C[A[i]-min]=1;
				}
				else{
				    	C[A[i]-min] = C[A[i]-min]+1;
				}

			}//for

	int sizeOfC=C.size();
	
	for(int i = sizeOfC; i > -1; i--){
		if (C[i] != 0){
		cout << i+min <<" "<< C[i] << endl;
		}

	}

}

bool areIdentical(const vector<int> &A, const vector<int> &B){
	int sizeOfA=A.size();
	int sizeOfB=B.size();

	if(sizeOfA != sizeOfB)
		return false;

	//int j=0;
	for(int i = 0; i <sizeOfA; i++){
		if(A[i] != B[i])
		 return false;
	}

	return true;
}


bool isPalindrome(const vector<int> &A){
	int sizeOfA=A.size();

	for(int i = 0; i <sizeOfA; i++){
		if(A[i] != A[(sizeOfA-1)-i])
		 return false;
	}
	return true;
}

bool isSubarray(const vector<int> &A, const vector<int> &B){
	int Asize = A.size();
    int Bsize = B.size();
	//condition
	if(Asize > Bsize) {
        return false;
    }

    for(int i = 0; i < (Bsize-Asize+1); i++) {
        bool found = true;

        for(int e=0; e<Asize; e++) {
            if(A[e] != B[i+e]) {
                found = false;
            }
        }
        if(found) {
            return true;
        }
    }

    return false;
}

int partitionAround(vector<int> &A, double k){
	
	return -1;
}

bool areIdenticalNotSorted(const vector<int> &A, const vector<int> &B){
	
	return false;
}

void mergeKqueues(vector<queue<int> > &A, vector<int> &result){

}
// Jesus Gutierrez