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
    vector<int> numbertwo;

    int temp;

    while(cin >> temp){
        if (counter%2==1){
            numberone.push_back(temp);
        }
        else{
            numbertwo.push_back(temp);
        }
        counter+=1;
    }
    sort(all(numberone));
    sort(all(numbertwo));

    // cout << numberone.size() newline;
    int sum = 0;
    for (int i = 0; i < numberone.size(); i++){
        sum+= abs(numberone[i]-numbertwo[i]);
    }
    cout << sum;
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