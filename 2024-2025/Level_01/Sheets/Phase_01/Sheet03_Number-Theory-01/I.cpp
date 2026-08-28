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

vector<int> Sieve (int n) {
    vector<int> smallest_divisors(n+1);

    for (int i = 2; i <= n; i++) {
        smallest_divisors[i] = i;
    }

    for (int i = 2; i*i <= n; i++) {
        if (smallest_divisors[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                smallest_divisors[j] = i;
            }
        }
    }

    return smallest_divisors;
}

int Prime_Factorization(vector<int> &divisors, int n) {
    int ans=0;

    while (n != 1) {
        ans++;

        // Count this prime only once
        int p = divisors[n];

        // Remove all occurrences of this prime
        while (n % p == 0) {
            n /= p;
        }
    }

    return ans;
}

int main()
{
    ShwaTech

    int n; cin >> n;

    vector<int> divisors = Sieve(3000);

    int c=0;
    for (int i = 6; i <= n; ++i) {
        if (Prime_Factorization(divisors, i) == 2) c++;
    }

    cout << c;

    return 0;
}
