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

    int n = s.size();

    vector<char> suffixMin(n);

    suffixMin[n-1] = s[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffixMin[i] = min(s[i], suffixMin[i+1]);
    }

    stack<char> st;
    string ans;

    for (int i = 0; i < n; i++) {
        st.push(s[i]);

        // Minimum character remaining in s
        char mn = (i == n - 1 ? '{' : suffixMin[i + 1]); // '{' is after 'z' in ASCII

        while (!st.empty() && st.top() <= mn) {
            ans += st.top();
            st.pop();
        }
    }

    // Pop any remaining characters
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans;

    return 0;
}
