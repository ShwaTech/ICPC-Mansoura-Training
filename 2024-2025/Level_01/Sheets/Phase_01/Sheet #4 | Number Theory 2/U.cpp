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

ll LCM (ll a, ll b) {
    return a / __gcd (a, b) * b;
}


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        string x, y; cin >> x >> y;

        int X = x.size(), Y = y.size();

        ll lcm = LCM(X, Y);

        string A="", B="";

        for (int i = 0; i < lcm / X; i++) {
            A += x;
        }

        for (int i = 0; i < lcm / Y; i++) {
            B += y;
        }

        cout << ( (A == B) ? A : "-1" ) << nl;
    }

    return 0;
}

