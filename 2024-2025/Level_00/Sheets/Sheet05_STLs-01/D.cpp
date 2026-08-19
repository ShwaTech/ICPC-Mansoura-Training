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

    string brackets; cin >> brackets;

    stack<char> st;

    for (char bracket: brackets) {
        if ((bracket == ')' && st.empty())) {
            cout << "No";
            return 0;
        }

        if (bracket == '(') st.push('(');
        else if (bracket == ')' && !st.empty()) st.pop();
    }

    if (st.empty()) cout << "Yes";
    else cout << "No";

    return 0;
}

// // ------------------- OR -------------------

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

    string brackets; cin >> brackets;

    int balance=0;
    for (char bracket: brackets) {
        if (bracket == '(') balance++;
        else balance--;

        if (balance < 0) {
            cout << "No";
            return 0;
        }
    }

    if (!balance) cout << "Yes";
    else cout << "No";

    return 0;
}
