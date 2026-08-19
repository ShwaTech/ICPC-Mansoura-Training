// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    string s; cin >> s;

    int n = s.length();

    for (int R = 25; R < n; R++) {
        int L = R-25;
        bool ok=true;
        map<char, int> freq;

        for (int i = L; i <= R; i++) {
            if (s[i] != '?') {
                freq[s[i]]++;

                if (freq[s[i]] > 1) {
                    ok=false;
                    break;
                }
            }
        }

        if (ok) {
            stack<char> missed;

            for (char C = 'A'; C <= 'Z'; C++) {
                if (freq[C] == 0) {
                    missed.push(C);
                }
            }

            for (int i = L; i <= R; i++) {
                if (s[i] == '?') {
                    s[i] = missed.top();
                    missed.pop();
                }
            }

            for (int i = 0; i < n; ++i) {
                if (s[i] == '?') s[i]='Q'; // Any Char
            }

            cout << s;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
