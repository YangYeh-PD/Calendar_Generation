class Calendar {
	public:
		Calendar(int m, int y);
		void days();
		void print();
		int month_day(int m, int y);
		int year_day(int y);
	private:
		int month;
		int year;
		int acdays;
		int blanks;
};