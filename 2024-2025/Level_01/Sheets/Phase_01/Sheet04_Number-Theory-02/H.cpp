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

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<int> odd, even;

        int sz = 2 * n;

        for (int i = 1; i <= sz; i++) {
            int x; cin >> x;

            if (x & 1) odd.push_back(i);
            else even.push_back(i);
        }

        vector<pair<int, int>> ans;
        for (int i = 0; i+1 < odd.size(); i += 2) {
            ans.push_back({odd[i], odd[i+1]});
        }
        for (int i = 0; i+1 < even.size(); i += 2) {
            ans.push_back({even[i], even[i+1]});
        }

        for (int i = 0; i < n-1; ++i) {
            cout << ans[i].first << " " << ans[i].second << nl;
        }
    }

    return 0;
}

