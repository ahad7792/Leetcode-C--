#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    map<char, int> ransomNoteMap;
    map<char, int> magazineMap;

    for (char letter : magazine) {
        magazineMap[letter]++;
    }

    for (char letter : ransomNote) {
        ransomNoteMap[letter]++;
        if (ransomNoteMap[letter] > magazineMap[letter])
            return false;
    }

    return true;
}