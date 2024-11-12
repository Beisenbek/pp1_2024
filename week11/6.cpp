#include <iostream>
#include <map>
#include <vector>

using namespace std;

double sum(vector<double> v){
    double res = 0;
    for(int i = 0; i < v.size(); ++i){
        res += v[i];
    }
    return res;
}

int main(){

    int n;
    cin >> n;
    string name;
    double score;

    map<string, vector<double> > scores;

    for(int i = 0; i < n; ++i){
        cin >> name >> score;
        scores[name].push_back(score);
    }

    for(map<string, vector<double> > :: iterator it = scores.begin(); it != scores.end(); ++it){
        string key = it->first;
        double f = sum(scores[key]) / scores[key].size();
        printf("%s: %.3f\n",key.c_str(), f);
    }

    return 0;
}