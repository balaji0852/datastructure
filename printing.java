
class node{
	int data;
	node l = null,r = null;
	node(int x){
		this.data = x;
	}

	public void insert(int data,node head){
		if(head.l==null && data<head.data){
			node newnode = new node(data);
			head.l = newnode;
			return;
		}
		else if(head.r==null && data>head.data){
			node newnode = new node(data);
			head.r = newnode;
			return;
		}
		else if(head.r!=null && data>head.data){
			this.insert(data,head.r);
		}
		else{
			this.insert(data,head.l);
		}

	}

	public void inorder(node head){
                if(head.l!=null){
			inorder(head.l);
		}
		System.out.println(head.data);
		if(head.r!=null){
			inorder(head.r);
		}
	}
}




class printing{
static public void main(String args[]){
	node parent = new node(10);
	parent.insert(11,parent);
	parent.insert(13,parent);
	parent.insert(12,parent);
	parent.insert(15,parent);
	parent.inorder(parent);
	}
}
