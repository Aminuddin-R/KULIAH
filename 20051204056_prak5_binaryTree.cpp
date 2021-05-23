#include<iostream>
using namespace std;

struct Node{
    int nim;
    string name;
    Node* right;
    Node* left;
};
Node* root =NULL;

//insert data in binary tree
Node* insert(Node *root,int x, string y) {
	if(root == NULL) {
        root=new Node();
        root->nim=x;
        root->name=y;
        root->left=NULL;
        root->right=NULL;
    }
	else if(x<=root->nim){
		root->left = insert(root->left,x,y);}
	else {
		root->right = insert(root->right,x,y);}

	return root;
}

//search data binary tree
// void srchD(){
//     // Ask user to enter a number.  
// 	int number;
// 	cout<<"Enter number be searched\n";
// 	cin>>number;
// 	//If number is found, print "FOUND"
// 	if(Search(Node* root,number) == true) cout<<"Found\n";
// 	else cout<<"Not Found\n";
// }
bool searchNode(Node *root, int data)
{
    if (root == NULL){
        return false;
    }else if (data == root->nim){
        cout<<root->name<<""<<root->nim<<endl;
    }else if (data <= root->nim){
        return searchNode(root->left, data);
    }else
        return searchNode(root->right, data);
}


//delete data binary tree
Node *findMinNode(Node *root) //Find Minimal Node Value
{
    while (root->left != NULL)
        root = root->left;
    return root;
}
Node *deleteNode(Node *root, int data){
    if (root == NULL)
        return root;
    else if (data < root->nim)
        root->left = deleteNode(root->left, data);
    else if (data > root->nim)
        root->right = deleteNode(root->right, data);
    else{
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            Node *min = findMinNode(root->right);
            root->nim= min->nim;
            root->right = deleteNode(root->right, min->nim);
        }
    }
    cout<<"delete success"<<endl;
    return root;
    
}


//print data binary tree
void Preorder( Node *root) {
	if(root == NULL) return;

	cout<<"("<<root->nim<<")"<<root->name<<"-";    // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	cout<<"("<<root->nim<<")"<<root->name<<"-";   //Print data
	Inorder(root->right);      // Visit right subtree
}
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	cout<<"("<<root->nim<<")"<<root->name<<"-";    // Print data
}


int main(){
     string name;
    int a,b;
    char c;
    do{
        system("cls");
        cout<<"==============="<<endl;
        cout<<"1.tambah data\n2.cari data\n3.hapus data\n4.baca data (pre,in,post) \n5.Quit"<<endl;
        cout<<"==============="<<endl;
        cout<<"x: ";cin>>a;
        switch(a){
         case 1:
         cout<<"nama: ";cin>>name;
         cout<<"NIM : ";cin>>b;
         root = insert(root,b,name);
         cout<<"ulang? ";cin>>c;
         break;
         case 2:
         cout<<"Enter the NIM to be shown: ";
         cin>>b;cout << searchNode(root, b);
         cout<<"ulang? ";cin>>c;
         break;
         case 3:
         cout<<"Enter the NIM to be deleted: ";
         cin>>b;root = deleteNode(root, b);
         break;
         case 4:
         cout<<"preorder : ";
         Preorder(root);cout<<endl;
         cout<<"inorder  : ";
         Inorder(root);cout<<endl;
         cout<<"postorder: ";
         Postorder(root);cout<<endl;
         cout<<"ulang? ";cin>>c;
         break; 
         case 5:
         return 'p';
         break;
         default:
         cout<<"INVALID INPUT\nulang? ";cin>>c;
         break;    
        }
    }while(c=='y'||c=='Y');
}