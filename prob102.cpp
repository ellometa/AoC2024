#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int counter = 1;
    vector<int> numberone;
    multiset<int> numbertwo;

    int temp;

    while(cin >> temp){
        if (counter%2==1){
            numberone.push_back(temp);
        }
        else{
            numbertwo.insert(temp);
        }
        counter+=1;
    }
    sort(all(numberone));

    int prod = 0;
    for (int i = 0; i < numberone.size(); i++){
        prod+= numberone[i]*numbertwo.count(numberone[i]);
    }
    cout << prod;



}

int32_t main() {
    IOS;

    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}