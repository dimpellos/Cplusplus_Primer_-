#pragma once
class Plorg {
private:
	static const int LEN = 20;
	char name[LEN];
	int ci;

public:
	Plorg();
	void reset(const int& c);
	void show() const;
};