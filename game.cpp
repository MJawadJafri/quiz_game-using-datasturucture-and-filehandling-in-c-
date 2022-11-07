#include<iostream>
#include<conio.h>
#include<fstream>
#include<chrono>
#include<string>
using namespace std;
//using namespace std::chrono;
struct node
{
	int data;
	node *nxt;
};
class list
{
private:
	node *head, *current;
public:
   list()
	{
	   head = current = NULL;
	}
   void score(int n)
   {
	   node *newnode = new node;
	   newnode->data = n;
	   newnode->nxt = NULL;
	   if (head == NULL)
	   {
		   head = current = newnode;
	   }
	   else
	   {
		   current->nxt = newnode;
		   current = newnode;
	   }
   }
   void display()
   {
	   node *temp = head;
	   while (temp)
	   {
		   cout << temp->data << "   \n";
		   temp = temp->nxt;
	   }
   }
};
//auto start = chrono::steady_clock::now();
class game
{
protected:
	char q;
	string name;
	int age;
	int wrrong = 0;
	int right = 0;
public:
	void questions();
	void get_info();
	void show();
	void info_about_game();
	void store();// using file
	void heading();
	void read();
	void search();
};
list l;
void game::questions()
{
	int hope;
king:
	system("cls");
	cout << "\t which field you like the most to answer \n";
	cout << "\t1)press 1 for pakistan history \n";
	cout << "\t2)press 2 for Math  \n";
	cout << "\t3)press 3 for computer science  \n";
	cout << "\t4)press 4 for general knowlege  \n";
	cout << "\t5)press 5 for assumble language \n";

	cin >> hope;
	switch (hope)
	{
	case 1:
	{
			  system("cls");
			  cout << "_______ pakistan study _________\n";
			  cout << "Question 1: When Pakistan won the Cricket World Cup: \n";
			  cout << "(a)1992  (b)1996  (c)1999  (d)2003 \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'a'||q=='A')
			  {
				  cout << " your answer is correct \n";
				  l.score(1);
				  right++;
			  }
			  else
			  {
				  cout << "you must learn more about cricket \n see u next time :: \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << " question 2. The national language of Pakistan is: \n";
			  cout << "(a)Pushto  (b) English  (c) Urdu  (d)punjabi \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'c'||q=='C')
			  {
				  cout << " your answer is correct \n";
				  l.score(2);
				  right++;
			  }
			  else
			  {
				  cout << "see u next time :: \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 3: The Nation game of Pakistan \n";
			  cout << "(a)football  (b) hockey  (c) basketball  (d)cricket \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q = 'b'||q=='B')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(3);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 4: who is  the founder of Pakistan \n";
			  cout << "(a)allama iqbal  (b) molana zafar ali khan   (c) quaid e azam  (d)non of these \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'c'||q=='C')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(4);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 5: pakistan became separate nation in \n";
			  cout << "(a)1945  (b) 1999   (c) 1917  (d)1947 \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'd'||q=='D')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(5);
			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  break;
	}
	case 2:
	{
			 
			  cout << "      history of pakistan   \n";
			  system("cls");
			  cout << "\n_______________math part_________________\n";
			  cout << "question 1: 1+3+3! \n";
			  cout << "(a)120  (b) 00   (c) 10  (d)100 \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'c'||q=='C')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(6);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 2: 2*2*2*2*2 \n";
			  cout << "(a)32  (b) 00   (c) 10  (d)100 \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'a'||q=='A')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(7);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 3: 3!= \n";
			  cout << "(a)6  (b) 4   (c) 23  (d)dont know \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(8);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 4: \n\t1+1+1 \n";
			  cout << "            1+1+2  \n";
			  cout << "            22+2  \n";
			  cout << "(a)120  (b) 238  (c) 1000  (d)100 \n";
			  cout << "type your answer ::";
			  cin >> q;
			  if (q == 'b'||q=='B')
			  {
				  cout << "your answer is right ::\n";
				  right++;
				  l.score(9);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "question 5: if james buy 12 ticket of movie and james brother harry buy 2 more ticket how many tickets they have \n";
			  cout << "(a)10  (b) 12  (c) 22  (d)14 \n";
			  cout << "type your answer ::";
			  cin >> q;
				  if (q == 'd'||q=='D')
			  {
				  cout << "your answer is right ::";
				  right++;
				  l.score(10);

			  }
			  else
			  {
				  cout << "your knowlege is too low \n";
				  wrrong++;
			  }
			  break;
	}
	case 3:
	{
			  system("cls");
			  cout << "_______computer science________\n";
			  cout << "q1: ctrl+E command use to open ? \n";
		  cout << "(a)my computer  (b) document (c) control panal (d) dont know \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(11);
				  right++;
			  }
			  else
			  {
				  cout << "see u soon \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "q2: ctrl+shift+esc command use to open ? \n ";
			  cout << "(a)task maneger  (b) folder (c) control panal (d) dont know \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(12);
				  right++;
			  }
			  else
			  {
				  cout << "see u soon \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "q3: ctrl+shift+n command use to create ? \n";
			  cout << "(a)new folder  (b) new window interface (c) new document(d) dont know \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(13);
				  right++;
			  }
			  else
			  {
				  cout << "see u soon \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "q4: ctrl+R command use to open ?\n";
			  cout << "(a)Run box   (b) document (c) control panal (d) dont know \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(14);
				  right++;
			  }
			  else
			  {
				  cout << "see u soon \n";
				  wrrong++;
			  }
			  system("cls");
			  cout << "q5: rename short key is?\n";
			  cout << "(a)f3 (b) f12 (c) f2 (d) dont know \n";
			  cin >> q;
			  if (q == 'c' || q == 'C')
			  {
				  l.score(15);
				  right++;
			  }
			  else
			  {
				  cout << "see u soon \n";
				  wrrong++;
			  }
			  break;
	}
	case 4:
	{
			  system("cls");
			  cout << "____________general knowlege___________\n";
			  cout << "q1:Grand Central Terminal, Park Avenue, New York is the world's? \n";
			  cout << "A)largest railway station  B)highest railway station C)longest railway station D)None of the above \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(16);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q2:Entomology is the science that studies? \n";
			  cout << "A.Behavior of human beings  B.Insects C.The origin and history of technical and scientific term  D.The formation of rocks \n";
			  cin >> q;
			  if (q == 'b' || q == 'B')
			  {
				  l.score(17);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q3:molana zafar ali khan born in? \n";
			  cout << "A.lahore  B.wazirabad C.karachi  D.rawalpandi \n";
			  cin >> q;
			  if (q == 'b' || q == 'B')
			  {
				  l.score(18);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q4:pakistani city know as city of cutlery? \n";
			  cout << "A.lahore  B.wazirabad C.karachi  D.rawalpandi \n";
			  cin >> q;
			  if (q == 'b' || q == 'B')
			  {
				  l.score(18);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q5:australia capital name? \n";
			  cout << "A.new york B.canberra C.sidney  D.maxico \n";
			  cin >> q;
			  if (q == 'b' || q == 'B')
			  {
				  l.score(20);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  break;
	}
	case 5:
	{
			  system("cls");
			  cout << "__________comuter assumbly__________ \n";
			  cout << "q1: register is part of processor that can hold \n";
			  cout << "a) a bit pattern b) low speed c) memory d) non of these \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(21);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q2: register get data from  \n";
			  cout << "a) ip/pc b) ax c) mar d) non of these \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(22);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q3: execution cyle of instruction from memory\n";
			  cout << "a) pc->mar->mdr->ir b) ir->mdr->mar->pc c)mdr->pc->mar->ir d) non of these \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(23);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q4: pc full form\n";
			  cout << "a) program counter b) personal computer c)mdr->pc-> d) non of these \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(24);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  system("cls");
			  cout << "q5: ah and al register ?\n";
			  cout << "a) 32 bit b) 16 bit c)8 bit  d) non of these \n";
			  cin >> q;
			  if (q == 'a' || q == 'A')
			  {
				  l.score(23);
				  right++;
			  }
			  else
			  {
				  wrrong++;
			  }
			  break;
	}
	}
	system("cls");
	char dot;
	cout << " \n press y to game opection or press any key too  break ::";
	cin >> dot;
	if (dot == 'y' || dot == 'Y')
	{
		goto king;
	}

}
void game::info_about_game()
{
	cout << " \t welcome to information about game \n";
	cout << " this game basically design to check you general knowlege \n";
	cout << "if your answer is right you got 1 point if your answer is wrrong yougot -1 \n";
	cout << "\tgame created by M J \n";
}

void game::store()
{
	ofstream file;
	file.open("abc.txt",ios::out|ios::app);
	file.write((char*)this, sizeof(*this));
	file.close();
}
void game::heading()
{
	cout << " Name \t Age \t Right \t Wrrong ";
}
void game::read()
{
	system("cls");
	ifstream file;
	file.open("abc.txt", ios::in);
	heading();
	file.read((char*)this, sizeof(*this));
	while (!file.eof())
	{
		show();
		file.read((char*)this, sizeof(*this));

	}
	file.close();
	
}
void game::get_info()
{
	
	system("cls");
	cout << "enter your name ::";
	cin.ignore();
	getline(cin, name);
	cout << "enter your age ::";
	cin >> age;
}
void game::show()
{
	cout <<" \n"<<name << "\t " << age <<"\t"<<right<<"\t"<<wrrong;
}
int main()
{
	game glass;
	char choice;
king:
	system("cls");
	cout << "\t________________________________________\n";
	cout << "            welcome too quiz game          \n";
	cout << "\t________________________________________\n";
	cout << " \ta) new game \n";
	cout << " \tb) hight_score \n";
	cout << " \tc) game info \n";

	cin >> choice;
	switch (choice)
	{
	case 'a':
	{
				glass.get_info();
				system("cls");
				glass.questions();
				glass.store();
				break;
	}
	case 'b':
	{
				glass.read();
				break;
	}
	case 'c':
	{
				system("cls");
				glass.info_about_game();
				break;
	}


	}
	char dot;
	cout << " \n press y to countinue or press any key too  break ::";
	cin >> dot;
	if (dot == 'y' || dot == 'Y')
	{
		goto king;
	}
	else
	{
		system("cls");
	
	}
	cin.get();
	auto end = chrono::steady_clock::now();
	double time = double(chrono::duration_cast<chrono::nanoseconds> (end - start).count());	
	cout << "\n you give following answer ::\n";
	l.display();
	cout << "program ended in time as follow ::" << time / 1e10 << endl;
	system("pause");
}
