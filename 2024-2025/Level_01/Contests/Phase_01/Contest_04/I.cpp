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
#define ld long double
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX = 1e7;

vector<int> Linear_Sieve (int n) {
    vector<int> primes;
    vector<bool> Is_Prime(n+1,true);

    Is_Prime[0] = Is_Prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (Is_Prime[i]) {
            primes.push_back(i);
        }

        for(auto p : primes) {
            if (i * p > n) break;

            Is_Prime[i * p] = false;

            if (i % p == 0)
                break;
        }
    }

    return primes;
}


int main()
{
    ShwaTech

    vector<int> primes = Linear_Sieve(MAX);

    vector<ll> ans;

    for (int i = 0; i < primes.size(); i++) {
        for (int j = i+1; j < primes.size(); j++) {
            ll prime_pair = 1LL * primes[i] * primes[j];
            if (prime_pair > 2e7) break;

            ans.push_back(prime_pair);
        }
    }

    sort(All(ans));

    int T; cin >> T;
    while (T--) {
        int k; cin >> k;

        cout << ans[k-1] << nl;
    }


    return 0;
}

