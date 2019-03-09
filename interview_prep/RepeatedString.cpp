#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    int size = s.size();
    long count = 0;
    //count how many 'a' letters in the string
    for(int j = 0; j < size; j++){
        if(s.at(j) == 'a'){
            count++;
        }
    }
    count = count * (n/size);
    if(n%size != 0){
        int newSize = n % size;
        for(int i = 0; i < newSize; i++){
            if(s.at(i) == 'a'){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}