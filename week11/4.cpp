#include <iostream>
#include <vector>

using namespace std;

int find(vector<string> v, string name){
    int result = -1;
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == name){
            result = i;
            break;
        }
    }
    return result;
}

int main(){

    int n;
    cin >> n;
    string name;
    double score;

    vector<string> students;
    vector<double> scores;
    vector<int> count;

    for(int i = 0; i < n; ++i){
        cin >> name >> score;
        int index = find(students, name);
        if(index == -1){
            students.push_back(name);
            scores.push_back(score);
            count.push_back(1);
        }else{
            scores[index] += score;
            count[index] += 1;
        }
    }

    for(int i = 0; i < students.size() - 1; ++i){
        for(int j = i + 1; j < students.size(); ++j){
            if(students[i] > students[j]){
                swap(students[i], students[j]);
                swap(scores[i], scores[j]);
                swap(count[i], count[j]);
            }
        }
    }

    for(int i = 0; i < students.size(); ++i){
        double f = scores[i] / count[i];
        printf("%s: %.3f\n",students[i].c_str(), f);
    }
  
    return 0;
}