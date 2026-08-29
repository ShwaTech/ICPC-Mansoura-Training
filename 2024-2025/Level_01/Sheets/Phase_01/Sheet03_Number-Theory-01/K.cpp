// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX=1e3;

bool Is_Prime (int x) {
    if (x < 2) return false;

    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

vector<int> Sieve (int n) {
    vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (Is_Prime(i)) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    ShwaTech

    vector<int> primes = Sieve(MAX);

    int n, k; cin >> n >> k;

    int c=0;
    for (int i = 1; primes[i] < n; i++) {
        int goldbach = primes[i - 1] + primes[i] + 1;

        if (goldbach > n) break;

        if (Is_Prime(goldbach)) c++;
    }

    cout << ( c >= k ? "YES" : "NO" );

    return 0;
}

