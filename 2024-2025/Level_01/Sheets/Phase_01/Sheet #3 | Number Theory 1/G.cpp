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

const int MAX=1e6+10;

vector<int> SieveOfEratosthenes (int n) {
    vector<int> smallest_divisor(n+1);

    for (int i = 2; i <= n; i++) {
        smallest_divisor[i] = i;
    }

    for (int i = 2; i*i <= n; i++) {
        if (smallest_divisor[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                smallest_divisor[j] = i;
            }
        }
    }

    return smallest_divisor;
}

vector<int> Prime_Factorization (vector<int> &divisors, int n) {
    vector<int> prime_factors;

    while (n != 1) {
        prime_factors.push_back(divisors[n]);
        n /= divisors[n];
    }

    return prime_factors;
}

int main()
{
    ShwaTech

    vector<int> smallest_divisors = SieveOfEratosthenes(MAX);

    int Q; cin >> Q;
    while (Q--) {
        int n; cin >> n;

        vector<int> prime_factors = Prime_Factorization(smallest_divisors, n);

        sort(All(prime_factors));

        for (int pf: prime_factors) {
            cout << pf << " ";
        }
        cout << nl;
    }

    return 0;
}
