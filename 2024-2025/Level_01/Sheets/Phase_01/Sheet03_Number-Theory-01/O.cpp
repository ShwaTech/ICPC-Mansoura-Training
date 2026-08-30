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

const int MAX = 1e5+5;

vector<int> Sieve (int n) {
    vector<bool> is_prime(n+1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}


int main()
{
    ShwaTech

    int n; cin >> n;

    if (n == 1) {
        cout << 1 << nl;
        cout << 1;
        return 0;
    }

    if (n == 2) {
        cout << 1 << nl;
        cout << 1 << " " << 1;
        return 0;
    }

    vector<int> primes = Sieve(n);

    vector<int> colors(n+10, 0); // From 2 => n+1

    for (int p: primes) {
        colors[p] = 1;
    }

    for (int i = 2; i <= n+1; i++) {
        if (colors[i] == 0) {
            colors[i] = 2;
        }
    }

    cout << 2 << nl;
    for (int i = 2; i <= n+1; i++) {
        cout << colors[i] <<  " ";
    }

    return 0;
}

