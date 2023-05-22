//This assignment is done in collaboration with Armaan Bahree (a1843711), Alanna Anna Shibu (a1867096) and, Angus McPherson (a1850701).
#include <bits/stdc++.h>
#include <vector>
using namespace std;
  

int kth_largest(vector<int> values, int k){
    int size=values.size();
    priority_queue <int, vector<int>, less<int>> pq;
    for (int i=0;i<size;i++){
        pq.push(values.at(i));
        /*if(i >= k) {
            pq.pop(); 
        }
        return pq.top();*/
    }
    for (int i=0;i<k-1;i++){
            pq.pop(); 
    }
    return pq.top();
}

/*int main ()
{
    vector<int> numbers;
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(30);
    numbers.push_back(2);
    int number;
    number=kth_largest(numbers,2);
    cout<<number<<endl;
    return 0;
}*/