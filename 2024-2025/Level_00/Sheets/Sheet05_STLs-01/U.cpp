// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

const ull MAX = (1ULL << 32) - 1;

using namespace std;


int main()
{
    ShwaTech

    stack<ull> st;
    st.push(1);

    ull x=0;

    int T; cin >> T;
    while (T--) {
        string s; cin >> s;

        if (s == "for") {
            ull n; cin >> n;

            ull curr = st.top();

            if (curr > MAX) {
                st.push(MAX + 1);
            } else {
                ull next = curr * n;

                if (next > MAX) next = MAX + 1;
                st.push(next);
            }
        } else if (s == "end") {
            st.pop();
        } else {
            x += st.top();

            if (x > MAX) {
                cout << "OVERFLOW!!!";
                return 0;
            }
        }
    }

    cout << x;

    return 0;
}
