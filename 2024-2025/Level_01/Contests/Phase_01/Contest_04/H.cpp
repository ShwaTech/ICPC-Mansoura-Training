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



int main()
{
    ShwaTech

    int n; cin >> n;
    string s; cin >> s;

    string ans; int mx=0;
    for (int i = 'A'; i <= 'Z'; i++) {
        for (int j = 'A'; j <= 'Z'; j++) {
            int c=0;

            for (int k = 0; k < n-1; k++) {
                if (s[k] == i && s[k+1] == j) c++;
            }

            if (c > mx) {
                mx = c;
                ans = i;
                ans += j;
            }
        }
    }

    cout << ans;

    return 0;
}

