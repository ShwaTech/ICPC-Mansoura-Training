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
    vector<bool> isPrime (n+1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;

    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}


int main()
{
    ShwaTech

    vector<int> primes = Sieve(1e7);

    int n;
    while (cin >> n) {
        vector<int> ans;
        bool ok=true;

        // This Process occurs 4 times (6, 4, 2, 0) and terminates if pIdx becomes less than 0
        for (int i = 6; i >= 0; i -= 2) {
            //// upper_bound(All(primes), n-i) - primes.begin() - 1
            // upper_bound(All(primes), n-i) ==> As we know it Gave us the greatest element than n-i
            // upper_bound(All(primes), n-i) - primes.begin() ==> This Gave us the index of that number
            // upper_bound(All(primes), n-i) - primes.begin() - 1 ==> This Gave us the index of the previous element to it
            // 2, 3, 5, 7, 11, 13, 17, 19, 23
            // 0, 1, 2, 3,  4,  5,  6,  7,  8
            // e.g. 24-6 = 18 ==> upper_bound(18) = 19 => its index = 7 => index - 1 = 6 (Which indicates to 17)
            // and so on - I hope you understand
            int pIdx = upper_bound(All(primes), n-i) - primes.begin() - 1;

            if (pIdx < 0) {
                ok=false;
                break;
            }

            n -= primes[pIdx];
            ans.push_back(primes[pIdx]);
        }

        if (ok) {
            for (int i = 0; i < 4; ++i) {
                cout << ans[i];

                if (i < 3) cout << " ";
            }
        } else {
            cout << "Impossible.";
        }

        cout << nl;

    }

    return 0;
}

