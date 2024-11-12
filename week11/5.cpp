#include <iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;
    string name;
    double score;

    map<string, double> scores;
    map<string, int> semestrs;

    for(int i = 0; i < n; ++i){
        cin >> name >> score;
        scores[name] += score;
        semestrs[name] += 1;
    }

    for(map<string, double> :: iterator it = scores.begin(); it != scores.end(); ++it){
        string key = it->first;
        double f = scores[key] / semestrs[key];
        printf("%s: %.3f\n",key.c_str(), f);
    }

    return 0;
}