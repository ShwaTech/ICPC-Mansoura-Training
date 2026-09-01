/*
لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
استغفر الله العظيم الذي لا إلاه إلا هو الحي القيوم وأتوب اليه
سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
سبحان الله وبحمده، سبحان الله العظيم
اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
لا إلاه إلا الله وحده هو يتولي الصالحين
لا إلاه إلا الله وحده هو يهدي السبيل
ربي إني ظلمت نفسي، فاغفر لي
ربي إني لما أنزلت اليّ من خيرٍ فقير
حسبي الله لا إلاه إلا هو عليه توكلت وهو رب العرش العظيم
بسم الله نبدأ وعليه نتوكل
*/

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX=1e6+5;

vector<bool> Sieve (int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) isPrime[j] = false;
        }
    }

    return isPrime;
}


int main()
{
    ShwaTech

    vector<bool> Is_Prime = Sieve(MAX);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int &ai: a) cin >> ai;

        int ans=INT_MIN;
        for (int i = 0; i < n; i++) {
            int curr=0;
            for (int j = i; j < n; j++) {
                curr += ((a[j] & 1) == 1) - (Is_Prime[a[j]]);

                ans = max(ans, curr);
            }
        }

        cout << ans << nl;
    }

    return 0;
}

