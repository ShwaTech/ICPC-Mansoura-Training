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

const int N=5e6;


vector<int> Sieve (int n) {
    vector<int> least_divisor(n+1);

    for (int i = 2; i <= n; i++) {
        least_divisor[i] = i;
    }

    for (int i = 2; i*i <= n; i++) {
        if (least_divisor[i] == i) {
            for (int j = i*i; j <= n; j += i) {
                least_divisor[j] = i;
            }
        }
    }

    return least_divisor;
}


int Prime_Factorization (vector<int> &divisors, int n) {
    int prime_factors=0;

    while (n != 1) {
        prime_factors++;

        n /= divisors[n];
    }

    return prime_factors;
}


int main()
{
    ShwaTech

    vector<int> divisors = Sieve(N);


    vector<int> prefix_PF(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefix_PF[i] = prefix_PF[i-1] + Prime_Factorization(divisors, i);
    }

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;

        cout << prefix_PF[a] - prefix_PF[b] << nl;
    }

    return 0;
}

