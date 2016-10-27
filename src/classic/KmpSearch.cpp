/*
 * [Source] https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class KMPSearch {
public:
    // find the start positions of pat in str
    vector<int> kmpSearch(string str, string pat) {
        int sLen = str.length(), pLen = pat.length();
        vector<int> lps = computeLPSArray(pat); // longest prefix suffix
for (int& i : lps)
    cout << i << " ";
cout << endl;
        vector<int> poses;
        int sIdx = 0, pIdx = 0;
        while (sIdx < sLen) {
cout << sIdx << endl;
            if (str[sIdx] == pat[pIdx]) {
                ++sIdx; ++pIdx;
            }

            if (pIdx == pLen) {
                poses.push_back(sIdx - pIdx); // found
                pIdx = lps[pIdx - 1];
            } else if (sIdx < sLen && str[sIdx] != pat[pIdx]) {
                if (pIdx == 0) {
                    ++sIdx;
                } else {
                    pIdx = lps[pIdx - 1]; // go back to the last position of previous match?
                }
            }
        }
cout << endl;
        return poses;
    }

private:
    // in pattern, if a substring is same as prefix, it means the correlate part in search string matches both the prefix and the substring. So if the next char of this substring is not match, only need to move the pointer to the end of prefix.
    vector<int> computeLPSArray(string& pat) {
        vector<int> lps(pat.length());

        lps[0] = 0;
        int pIdx = 1;
        int len = 0;
        while (pIdx < (int)pat.length()) {
            if (pat[pIdx] == pat[len]) {
                ++len;
                lps[pIdx] = len;
                ++pIdx;
            } else if (len != 0) { // notice
                len = lps[len - 1];
cout << len << " " << pIdx << " " << lps[len-1] << endl;
            } else {
                lps[pIdx] = 0;
                pIdx++;
            }
        }
        return lps;
    }
};

int main() {
    KMPSearch k;
    vector<int> poses = k.kmpSearch("ABC ABCDAB ABCDABCDABDE", "ABCDABD");
    for (int& p : poses)
        cout << p << endl;

    return 0;
}
