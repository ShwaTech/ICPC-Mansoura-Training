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
        int n, m; cin >> n >> m;

        vector<int> infected(m);
        for (int &ai: infected) cin >> ai;

        sort(All(infected));

        vector<int> num_uninfected;
        for (int i = 1; i < m; i++) {
            num_uninfected.push_back(infected[i] - infected[i-1] - 1);
        }
        num_uninfected.push_back(infected[0]-1 + n-infected[m-1]);

        sort(RAll(num_uninfected));

        int survived=0, day=0;

        for (auto val: num_uninfected) {
            val -= 2 * day;

            if (val > 0) {
                if (val == 1) {
                    day++;
                    survived++;
                } else {
                    day += 2;
                    survived += val-1;
                }
            }
        }

        cout << n - survived << nl;
    }

    return 0;
}

