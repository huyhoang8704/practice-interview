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
    sort(a , a+n , [](pair<int, int> a, pair<int, int> b) -> bool {
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

//? lower_bound(a,a+n,x) trả về iterator đến vị trí phần tử đầu tiên >= x
//? upper_bound(a,a+n,x) trả về iterator đến vị trí phần tử đầu tiên > x
// 1 2 3 4 4 5 6 
// lower_bound(a,a+n,4) = 3
//

// https://www.youtube.com/watch?v=H9UEBg5jy3k&list=PL95oJNCBbtQS5jIvd6a9MDiIexv5cA9Pm&index=16
//! Nhà gần nhất
void solution1(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >>x;
    sort(a,a+n);
    int res = 10000000;
    for(int i= 0 ;i<n-1;i++){
        res = min(res , a[i+1] - a[i]);
    }
    cout << "Khoang cach nho nhat la: " << res << endl;
}
//! Xếp gạch
void solution2(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >>x;
    int maxArr = *max_element(a,a+n);
    if (maxArr == 0) cout << 1;
    else if(maxArr >= n) cout << n;
    else cout << maxArr + 1;
}
//! Xắp xếp thời gian diễn
void solution3(){
    int n; cin >>n;
    pair<int,int> a[n];
    for(int i=0 ; i <n;i++) cin >> a[i].first >> a[i].second;
    sort(a,a+n, [](pair<int,int> a , pair<int,int> b) -> bool {
        return a.second < b.second;
    });
    int res = 1;
    int end_time = a[0].second;
    for(int i= 1 ; i<n ; i++) {
        if(a[i].first > end_time) {
            res++;
            end_time = a[i].second;
        }
    }
    cout << res;
}
//! Bài 21 : In khuôn theo dạng, theo thứ tự lớn nhất , nhỏ nhất m lớn t2 , nhỏ t2
void solution21(){
    int n; cin >>n;
    int a[n];
    for(int &x : a) cin >>x;
    sort(a,a+n , greater<int>());
    int i = 0 , j =n-1;
    queue<int> result;
    while(i < j) {
        result.push(a[i]); i++;
        result.push(a[j]); j--;
    }
    if( i == j) result.push(a[i]); // Trường hợp n lẻ thì left = right thêm 1 thằng vào thôi
    while(!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
}
//! Bài 23 : Đếm số lượng cặp có tổng bằng k
//* Ý tưởng tìm vị trí phần tử cần tìm đầu tiên và cuối cùng trong mảng (nlogn)
void solution23(){
    int n, k; cin >>n >> k;
    int a[n];
    for(int &x : a) cin >>x;
    sort(a,a+n);
    int res = 0;
    for(int i= 0 ; i< n-1;i++){
        auto it1 = lower_bound(a+i+1, a+n, k-a[i]); // >= k-a[i]
        auto it2 = upper_bound(a+i+1, a+n, k-a[i]); // > k-a[i]
        // Nếu có tìm thấy
        if(*it1 == k-a[i]) {
            res += it2 - it1;
        }
    }
    cout << res;
}
//! Bài 28 : Tìm các số còn thiếu trong 1 Array
int cnt[1000001];
void solution(){
    memset(cnt , 0 , sizeof(cnt));
    int n; cin >>n;
    int l=1e9,r=-1e9;
    for(int i=0; i<n;i++) {
        int x; cin >>x;
        l = min(l,x);
        r = max(r,x);
        cnt[x] = 1;
    }
    vector<int> v;
    for(int i=l ; i <= r;i++) if(!cnt[i]) v.push_back(i);
    for(auto x : v) cout << x << " ";
}


int main(){
    #ifndef ONLINE_JUDGE;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    solution();
    return 0;
}