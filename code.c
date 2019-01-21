//readme'yi oku
// only functions was written
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{  //var.lar nicin kullanilacagi belli
    int kimlikNo;
    char ad[10];
    char soyad[20];
    int arkadasSayisi;
    int arkadaslar[20];
    struct node *leftNode;
    struct node *rightNode;
};

int main()
{
    printf("Hello world!\n");
    return 0;
}



  node * newNode()
  {
      //new node
      node *temp = (node *) malloc(sizeof(node));
      temp->leftNode=null;
       temp->rightNode=null;
      return temp;
  }

  void insertNewUser(node *head ,int kimlikNo)
   {
       node *current =head;
       node *prev = head;
        int stop =0;
     while(stop=0)
     {
         if (((current->kimlikNo)>=kimlikNo)&& current != null )
         {
             prev = current;
             current= current->rightNode;
         }
         else if ( current != null) //yani current->kimlikNo < kimlikNo
         {
             prev = current;
             current= current->leftNode;
         }
         else if ( current = null)
         {
             //prev = current;
             stop = 1;
         }
     }

      node *newn = newNode();
        current = newn;
        current->kimlikNo= kimlikNo;

   }

   //delete icinde kullnilacak
   node * findMinAndNull(node *head)
   {
       node * prev;

       while (head->leftNode !=null)

           prev = head;
           head = head->leftNode;
       }
        prev->leftNode = null;  //minimumu yapragi  sildi
       return head;   // minimumu return etti

   }

   node * deleteNode(node * head,int kimlikNo )
   {

       //find the node
       while((head->kimlikNo!=(kimlikNo)) && (head!=null))
       {
           if (head->kimlikNo< kimlikNo)
           {
               head=head->leftNode;
           }
           else
           {
               head=head->rightNode;
           }
       }
       if(head->kimlikNo=(kimlikNo)) && (head!=null))
       { //if found
           head= findMinAndNull(head->rightNode);
           //right alt agactaki en kucugu nodu bul ve yerine koyar

       }
   }

  bool contains(node * head,int kimlikNo)
   {
        //find node
          while((head->kimlikNo!=(kimlikNo)) && (head!=null))
       {
           if (head->kimlikNo< kimlikNo)
           {
               head=head->leftNode;
           }
           else
           {
               head=head->rightNode;
           }
       }
       if(head->kimlikNo=(kimlikNo)) && (head!=null))
       {

           printf("aranan kisinin adi %d ve soyadi %d" ,head->ad, head->soyad);
           return  true;
       }
       else
        return false;
   }

   node * friends(node * head,int kimlikNo)
   {
       node * temp =head;
       //find the node
        while((head->kimlikNo!=(kimlikNo)) && (head!=null))
       {
           if (head->kimlikNo< kimlikNo)
           {
               head=head->leftNode;
           }
           else
           {
               head=head->rightNode;
           }
       }
       if(head->kimlikNo=(kimlikNo)) && (head!=null))
       {
           for (int i =0; i<(head->arkadasSayisi); i++)
            {
                //yazdir print
                contains(temp,head->arkadaslar[i]);
            }

       }
   }

   //size func icinde kullanilcak
    void inOrderSize(node *head, int *size)
    {
        //size pointer alip ve arttirir baska order da olur
          if  (head!=null)
       {
           inOrder(temp->leftNode)
           *size++;
           inOrder(temp->rightNode);
       }

    }

   int size(node *head)
   {      int size;
           inOrder(node *head ,&size)
       return size;
   }
   ///
   //inorder yazmak yani kucukten buyuge
   void  inOrder(node *head)
           {
                 if  (head!=null)
               {
                    inOrder(temp->leftNode)
                    printf("ad %d soyad %d \n",head->ad, head->soyad );
                    inOrder(temp->rightNode);
               }
           }

   void inOrderYaz((node * head,int kimlikNo))
   {
       node * temp =head;
       //find the node
        while((head->kimlikNo!=(kimlikNo)) && (head!=null))
       {
           if (head->kimlikNo< kimlikNo)
           {
               head=head->leftNode;
           }
           else
           {
               head=head->rightNode;
           }
       }
       if(head->kimlikNo=(kimlikNo)) && (head!=null))
       {
           //yazdir
          inOrder(head);
       }
       else{
        printf("wrong \n");
       }
   }

   void printGreater(node * head,int kimlikNo)
   {
       node * temp =head;
       //find the node
        while((head->kimlikNo!=(kimlikNo)) && (head!=null))
       {
           if (head->kimlikNo< kimlikNo)
           {
               head=head->leftNode;
           }
           else
           {
               head=head->rightNode;
           }
       }
       if(head->kimlikNo=(kimlikNo)) && (head!=null))
       {
          inOrder(head->rightNode);  //sag alt agaci yazdirdi
       }
       else{
        printf("wrong \n");
       }
   }
   ///////// //
   printInOrder(node *head)
           {
                 if  (head!=null)
               {
                    inOrder(temp->leftNode)
                    printf("kimlik no %d ,ad %d  ve soyad %d \n",head->kimlikno,head->ad, head->soyad );
                    inOrder(temp->rightNode);
               }
           }
