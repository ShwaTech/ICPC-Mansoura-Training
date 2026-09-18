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

const int mod = 1<<30;


vector<int> Sieve(int n) {
    vector<int> least_prime(n+1);

    for (int i = 2; i <= n; i++) {
        least_prime[i] = i;
    }

    for (int i = 2; i*i <= n; i++) {
        if (least_prime[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                least_prime[j] = i;
            }
        }
    }

    return least_prime;
}


int Prime_Factorization (vector<int> &divisors, int n) {
    map<int, int> freq;
    int num_divisors=1;

    while (n != 1) {
        freq[divisors[n]]++;
        n /= divisors[n];
    }

    for (auto frq: freq) {
        num_divisors *= (frq.second + 1);
    }

    return num_divisors;
}



int main()
{
    ShwaTech

    vector<int> divisors = Sieve(1e6+5);

    int a, b, c; cin >> a >> b >> c;

    int ans=0;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ans += Prime_Factorization(divisors, i * j * k);
                ans %= mod;
            }
        }
    }

    cout << ans;

    return 0;
}



// -------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------ OR ---------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------


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

const int mod = 1<<30;


int Count_Divisors (int n) {
    int res=1;

    for (int p = 2; p*p <= n; p++) {
        if (n % p == 0) {
            int power=0;

            while (n % p == 0) {
                n /= p;
                power++;
            }

            res *= (power + 1);
        }
    }

    if (n > 1) {
        res *= 2;
    }

    return res;
}


int main()
{
    ShwaTech

    int a, b, c; cin >> a >> b >> c;

    int ans=0;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ans += Count_Divisors(i * j * k);
                ans %= mod;
            }
        }
    }

    cout << ans;

    return 0;
}

