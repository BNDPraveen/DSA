import java.sql.SQLOutput;
import java.util.*;
public class ArrayListDemo {

    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        System.out.println(list);
        list.add(5);
        list.set(2,1000); // .set(index_no,element) --> This Changes element at index 2 to 1000
        System.out.println(list);
        ArrayList<Integer> newlist=new ArrayList();
        newlist.add(1);
        newlist.add(2);
        newlist.add(3);
        newlist.add(4);       //.add(element) --> This will add element;
        list.addAll(newlist); // .addAll() --> This will combine to two lists(list & newlist)
        System.out.println(list);

        System.out.println(list.get(1));  // .get() --> This will get element at that index

        list.remove(1); // .remove(index_no)-->this remove element at index 1
        list.remove(Integer.valueOf(4)); //first occurance of 4 is deleted
        // .remove(Integer.valueOf(value))-->this remove the value from list
        System.out.println(list);

        System.out.println(list.contains(5)); //This checks if element is present in list return true or false Timecomplexity-->O(n)

        //iteration technique-1
        for(int i=0;i<list.size();i++){
            System.out.println("The elements is "+ list.get(i));
        }

        //iteration using for each loop-2
        for(Integer element: list){
            System.out.println("foreach element is "+element);
        }

        //iterator
        Iterator<Integer> it=list.iterator();
        while(it.hasNext()){ //.hasNext-->This tells if there is a next element or not
            System.out.println("Iterator "+it.next()); //.next()-->This gives next element of list
        }

        list.clear(); //This will remove all the elements from list
        System.out.println(list);




    }
}


/*
removing an element from middle of Arraylist gives O(n) complexity as the elements are shifted toward left side
adding an element in the middle of Arraylist gives O(n) complexity as the elements are shifted towards right side
.set(index,element) --> This give O(1) complexity as only changes value at that index
.contains() -->This gives O(n) as it as to travers the list to check for element
ToDo: To String method in java

Functions using Arraylist object
.add(element)-->This will add element;
.addAll()-->This will combine to two lists
.get()-->This will get element at that index
.remove(index_no)-->this remove element at index
.remove(Integer.valueOf(value))-->this remove the value from list
.clear()-->This will remove all the elements from list
.contains()-->This checks if element is present in list return true or false
.set(index_no,100)-->This Changes element at index  to 100
.size()--> This gives number of elements present in the ArrayList
 */

