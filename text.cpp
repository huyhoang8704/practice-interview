#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 10000000;
bool nt[maxn + 1];
// Duyệt dãy số nguyên tố
void isPrime(){
    memset(nt , true , sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i = 2 ; i <= sqrt(maxn) ; i++){
        if(nt[i]){
            // Những số nào có bội chung của nt[i] nên xét là false
            for(int j = i * i ; j <= maxn ; j += i){
                nt[j] = false;
            }
        }
    }
}
// Phân tích thừa số nguyên tố
void pt(int n){
    for(int i= 2 ; i<= sqrt(n); i++) {
        while(n % i == 0 ){
            cout << i << " ";
            n /=i;
        }
    }
    if(n > 1) cout << n << endl;

    // 1020 => 2 2 3 5 17
}
// Sắp xếp các phần tử sao cho nó stable
void sortStable(){
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i= 0; i<n;i++){
        cin >>a[i].first;
        a[i].second = i;
    }
    sort(a , a+n , [](pair<int, int> a, pair<int, int> b){
        if(a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });
    for(auto x : a) cout << x.first << " " << x.second << endl;
}
// Đếm tần suất xuất hiện các phần tử
void dem(){
    map<int, int> mp;
    int n; cin >>n;
    for(int i = 1 ; i<=n;i++) {
        int x ; cin >>x;
        mp[x]++;
    }
}


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    multimap<int, int> mp;
    return 0;
}