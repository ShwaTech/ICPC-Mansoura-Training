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
        string s; cin >> s;

        stack<int> lower_pos, upper_pos;

        vector<bool> Is_Deleted(s.length(), false);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B') {
                if (!upper_pos.empty()) {
                    Is_Deleted[upper_pos.top()] = true;
                    upper_pos.pop();
                }
            } else if (s[i] == 'b') {
                if (!lower_pos.empty()) {
                    Is_Deleted[lower_pos.top()] = true;
                    lower_pos.pop();
                }
            } else if (islower(s[i])) {
                lower_pos.push(i);
            } else if (isupper(s[i])) {
                upper_pos.push(i);
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (!Is_Deleted[i] && s[i] != 'B' && s[i] != 'b') {
                cout << s[i];
            }
        }

        cout << nl;
    }

    return 0;
}

