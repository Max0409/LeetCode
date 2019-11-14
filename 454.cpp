using namespace std;

#include <vector>
#include <set>
#include <unordered_map>
using namespace std;
int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {

    unordered_map<int, int> sum2;
    int count;

    if (A.empty()) {
        return 0;

    }


    for (int c:C) {
        for (int d:D) {
            sum2[c + d]++;


        }
    }

    for (int a:A) {
        for (int b:B) {
            count += sum2[-a - b];

        }
    }

    return count;

}
//int main(){
//    vector<int> A={1};
//    vector<int> B={-1};
//    vector<int> C={0};
//    vector<int> D={1};
//
//}