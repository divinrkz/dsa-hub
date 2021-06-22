class BST {
    private:  
        int n;
        BST *node, *root;
    
    public:
        BST();

        BST(int n);

        void insert();

        void remove();

        void getMin();

        void getMax();

        void getHeight();

        void traversal();
};


BST::BST(int n) {
    this->n = n;
}



void BST::insert() {
    this->n = n;
}


