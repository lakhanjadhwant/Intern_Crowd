#include<iostream>
#include<string>
using namespace std;
int count=0;

class Node{
	public:
		string name;
		Node *next=NULL;		
};

void print(Node* h,int c){
    int i=1;
    if (h==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else 
    {
        cout<<"\nThe following list are:\n";
        while(h!=NULL&&i<=c)
        {
		    cout<<i<<"."<<" "<<h->name<<endl;
		    i++;
		    h=h->next;
	}
    }
	
}

int insertAtTheEnd(Node** head, string newName){
	//1. Prepare a newNode
	Node* newNode = new Node();
	newNode->name=newName;
	newNode->next=NULL;
	//2. if linked list is empty, newNode will be head node
	if(*head==NULL){
		*head=newNode;
		count++;
		return count;
	}
	else
	{
	    //3. Find the last node
	    Node* last=*head;
	    while (last->next!=NULL)
	    {
		    last=last->next;
	    }
	    //4. Insert newNode after last node(at the end)
	    last->next=newNode;
	    count++;
	    return count;
	}
	
}

void del(Node* &head){
    cout<<"Delete Funtion "<<endl;
    int j,counting=0,pos;
    cout<<"Enter the value of position to be deleted....."<<endl;
    cin>>pos;
    Node *p=head;
    Node *ptr=NULL;
    if (pos==1)
    {
        head=p->next;
        delete p; // use delete instead of free
    }
    else
    {
        for(j=1;j<pos;j++)
        {
            ptr=p;
            p=p->next;
        }
        ptr->next=p->next;
        delete p; // use delete instead of free
    }
    cout<<"Deleted Successfully";
}


int main()
{		
	int c=0,choice;
	string naam;    
    Node* head=NULL;
	
	
	while(choice!=4){
	    cout << "\n         -------Birthday List---------" << endl;
	    cout << "----------------------------------------------" << endl;
	    cout << "1 to add friend or Family  name: \n2 to show the list: \n";
	    cout << "3 to delete \n4 for exit" << endl;
	    cout << "----------------------------------------------" << endl;
	    cin >> choice;
	
	    switch (choice)
	    {
	    case 1:
	    	cout<<"Enter Name, Day and Month! For example=(Monty 12 August):"<<endl;
	    	cin.ignore();
			getline(cin,naam);
			c=insertAtTheEnd(&head,naam);       
	        break;
	    case 2:
	        print(head,c);
	        break;
	    case 3:
	        del(head);
	        break;
	    case 4:
	        cout<<"Thanks, have a great day!"<<endl;
	        break;
	
	    default:
	        cout << "Please enter a vaild Choice" << endl;
	        break;
	    }
		
	}
	
	return 0;
}
