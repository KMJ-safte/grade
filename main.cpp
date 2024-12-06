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
		cout << "�л�:" << name << "�й�:" << studentId << endl;
		for (auto& g : grade) {
			cout << "����:" << g.showSubject() << "����:" << g.showScore() << endl;
		}
		cout << "��ü ��� : " << showAverage();

	}
};


int main() {

	string name, subject;
	int age, score, studentId;
	cout << "�̸� �Է�:";
	getline(cin, name);
	cout << endl;
	cin.ignore();
	cout << "���� �Է�:";
	getline(cin, subject);
	cout << endl;
	cout << "���� �Է�:";
	cin >> age;
	cout << endl;
	cout << "���� �Է�:";
	cin >> score;
	cout << endl;
	cout << "�л� id�Է�:";
	cin >> studentId;
	cout << endl;

	Student s(name, age, studentId);
	s.addGrade(subject, score);
	s.showStudent();

	return 0;
}