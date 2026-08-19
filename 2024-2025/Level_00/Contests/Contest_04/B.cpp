// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    string s; cin >> s;
    int n=s.size();

    int after=0, before=0;
    bool missions=false;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'E') {
            if (after) after--;
            else before--;
            missions=true;
        } else {
            if (missions) after++;
            else before++;
        }
    }

    if (before < 0) cout << "I cry";
    else cout << before;

    return 0;
}
