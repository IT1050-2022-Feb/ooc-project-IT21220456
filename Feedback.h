//Feedback.h

class Feedback
{
	private :
		char feedback_ID[10];
		char feedback_Description[200];
		char feedback_Reply[200];
		
	public :
		Feedback();
		void addFeedback(char f_id[], char f_msg[], char f_Reply[]);
		void getviewfeedback();
		~Feedback();
};


