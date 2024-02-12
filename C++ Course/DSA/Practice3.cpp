#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
vector<long long> solve(int N, vector<int> A, vector<int> B, int Q,
                            vector<int> Queries) {
        // code here
        vector<long long> max_costs;

    for (int i = 0; i < Q; ++i) {
        int K = Queries[i];
        long long max_cost = 0;

        for (int j = 1; j <= K; ++j) {
            long long cost = static_cast<long long>(j) * A[j - 1] + B[j - 1];
            max_cost = max(max_cost, cost);
        }

        max_costs.push_back(max_cost);
    }

    return max_costs;
    }
    
};
    
int main() {
int T;
cin >> T;
while (T--) {
int N, Q;
cin >> N >> Q;
vector<int> A(N), B(N);
for (int i = 0; i < N; i++) {
cin >> A[i] >> B[i];
}
vector<int> Queries(0);
for (int i = 0; i < Q; i++) {
cin >> Queries[i];
}
Solution obj;
auto ans = obj. solve(N, A, B, Q, Queries);
for (auto i : ans) cout << i <<" ";
cout << endl;
}
}