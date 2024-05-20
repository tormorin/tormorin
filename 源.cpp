#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <windows.h>
using namespace std;

struct Rule {
    vector<string> conditions;
    string result;
};

class MedicalExpertSystem {
private:
    map<string, bool> facts;
    vector<Rule> rules;
    vector<string> symptomsList;  // 用于存储症状列表

public:
    void loadFactsFromFile(string filePath) {
        ifstream file(filePath);
        string fact;
        while (getline(file, fact)) {
            if (!fact.empty()) {
                facts[fact] = true;
            }
        }
        file.close();
    }

    void loadRulesFromFile(string filePath) {
        ifstream file(filePath);
        if (!file) {
            cout << "Cannot open file: " << filePath << endl;
            return;
        }
        string line;
        while (getline(file, line)) {
            if (line.empty()) continue;  // 忽略空行
            stringstream ss(line);
            string condition;
            vector<string> conditions;
            while (getline(ss, condition, '&')) {
                conditions.push_back(condition);
            }
            if (!conditions.empty()) {
                string result = conditions.back();
                conditions.pop_back();
                rules.push_back({ conditions, result });
            }
        }
        file.close();
    }

    bool evaluateCondition(const vector<string>& conditions, const map<string, bool>& facts) {
        for (auto& condition : conditions) {
            auto it = facts.find(condition);
            if (it == facts.end() || !it->second) {
                return false;
            }
        }
        return true;
    }

    void infer(ofstream& file) {
        bool updated = true;
        while (updated) {
            updated = false;
            for (auto& rule : rules) {
                if (rule.conditions.empty()) continue;  // 忽略空条件
                if (evaluateCondition(rule.conditions, facts)) {
                    if (!facts[rule.result]) {
                        facts[rule.result] = true;
                        file << "Diagnosis: " + rule.result << endl;
                        cout << "Diagnosis: " + rule.result << endl;
                        updated = true;
                    }
                }
            }
        }
    }

    void writeDiagnosisToFile(string filePath) {
        ofstream file(filePath);
        if (!file) {
            cout << "Cannot open file: " << filePath << endl;
            return;
        }
        infer(file);
        file.close();
    }

    void querySymptoms() {
        string symptom;
        cout << "Please enter your symptoms (type 'done' to finish): ";
        while (cin >> symptom && symptom != "done") {
            if (!symptom.empty()) {
                facts[symptom] = true;
                symptomsList.push_back(symptom);  // 将症状添加到列表
            }
        }
    }

    void printSymptoms() {  // 打印所有记录的症状
        cout << "You have reported the following symptoms:" << endl;
        for (const string& symptom : symptomsList) {
            cout << "- " << symptom << endl;
        }
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string rulesPath = "rules.txt";
    string factsPath = "facts.txt";
    string outputPath = "diagnosis.txt";

    MedicalExpertSystem mes;
    mes.loadRulesFromFile(rulesPath);
    mes.loadFactsFromFile(factsPath);

    mes.querySymptoms();
    mes.printSymptoms();  // 打印症状
    mes.writeDiagnosisToFile(outputPath);

    return 0;
}
