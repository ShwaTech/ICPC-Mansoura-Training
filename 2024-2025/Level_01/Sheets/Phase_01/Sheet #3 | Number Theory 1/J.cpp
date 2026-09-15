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

const int MAX=1e7+5;

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

vector<int> Prime_Factorization(vector<int> &divisors, int n) {
    vector<int> ans;

    while (n != 1) {
        ans.push_back(divisors[n]);
        n /= divisors[n];
    }

    return ans;
}

int main()
{
    ShwaTech

    vector<int> divisors = Sieve(MAX);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<int> prime_factors = Prime_Factorization(divisors, n);

        map<int, int> freq;
        for (auto pf: prime_factors) {
            freq[pf]++;
        }

        int E=0, O=0;
        for (auto it: freq) {
            if (it.second & 1) O++;
            else E++;
        }

        cout << ( E > O ? "Psycho Number" : "Ordinary Number" ) << nl;
    }

    return 0;
}


// // =================================================================================================
// // ============================================= OR ================================================
// // =================================================================================================


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

const int MAX=1e7+5;

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

pair<int, int> Prime_Factorization(vector<int> &divisors, int n) {
    pair<int, int> res;

    while (n != 1) {
        int p = divisors[n];

        int c=0;
        while (n % p == 0) {
            n /= p;
            c++;
        }

        if (c & 1) res.first++;          // Odd
        else res.second++;               // Even
    }

    return res;
}

int main()
{
    ShwaTech

    vector<int> divisors = Sieve(MAX);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        pair<int, int> Odd_Even = Prime_Factorization(divisors, n);

        int O = Odd_Even.first;
        int E = Odd_Even.second;

        cout << ( E > O ? "Psycho Number" : "Ordinary Number" ) << nl;
    }

    return 0;
}



