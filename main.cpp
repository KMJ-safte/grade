#include<bits/stdc++.h>

using namespace std;

class Grade {
	string subject;
	int score;
public:
	Grade(string subject, int score) : subject(subject), score(score) {};
	string showSubject() {
		return subject;
	}
	int showScore() {
		return score;
	}
};

class Student {
	string name;
	int age; 
	int studentId;
	vector<Grade> grade;
public:
	Student(string name, int age, int studentId) : name(name), age(age), studentId(studentId) {};
	
	void addGrade(string subject, int score) {
		grade.push_back(Grade(subject, score));
	}

	int showAverage() {
		int sum = 0;
		for (auto& g : grade) {
			sum += g.showScore();
		}
		return grade.empty() ? 0 : sum / grade.size();
	}

	void showStudent() {
		cout << "학생:" << name << "학번:" << studentId << endl;
		for (auto& g : grade) {
			cout << "과목:" << g.showSubject() << "점수:" << g.showScore() << endl;
		}
		cout << "전체 평균 : " << showAverage();

	}
};


int main() {

	string name, subject;
	int age, score, studentId;
	cout << "이름 입력:";
	getline(cin, name);
	cout << endl;
	cin.ignore();
	cout << "과목 입력:";
	getline(cin, subject);
	cout << endl;
	cout << "나이 입력:";
	cin >> age;
	cout << endl;
	cout << "점수 입력:";
	cin >> score;
	cout << endl;
	cout << "학생 id입력:";
	cin >> studentId;
	cout << endl;

	Student s(name, age, studentId);
	s.addGrade(subject, score);
	s.showStudent();

	return 0;
}