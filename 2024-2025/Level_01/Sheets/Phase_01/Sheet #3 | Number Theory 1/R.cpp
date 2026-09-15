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
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


vector<int> Sieve (int n) {
    vector<int> smallest_divisor(n+1);

    for (int i = 2; i <= n; i++) {
        smallest_divisor[i] = i;
    }

    for (int i = 2; i*i <= n; i++) {
        if (smallest_divisor[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                if (smallest_divisor[j] == j) {
                    smallest_divisor[j] = i;
                }
            }
        }
    }

    return smallest_divisor;
}

bool Is_Semi_Prime (vector<int> &divisors, int n) {
    vector<int> semi_primes;

    while (n != 1) {
        semi_primes.push_back(divisors[n]);
        n /= divisors[n];
    }

    return semi_primes.size() == 2 && semi_primes[0] != semi_primes[1];
}


int main()
{
    ShwaTech

    vector<int> divisors = Sieve(200);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        bool ok = false;
        for (int i = 1; i <= n/2; i++) {
            if (Is_Semi_Prime(divisors, i) && Is_Semi_Prime(divisors, n-i)) {
                ok = true;
                break;
            }
        }

        cout << ( ok ? "YES\n" : "NO\n" );
    }

    return 0;
}

