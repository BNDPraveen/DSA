import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class ArrayList2 {
    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<>();
        al.add(0);
        al.add(8);
        al.add(4);
        al.add(6);
        al.add(8);
        al.add(10);
        System.out.println(al);

        Collections.sort(al);
        System.out.println(al);
        for(int i=0;i<al.size();i++){
            System.out.println(al.get(i));
        }
        Iterator<Integer> it=al.iterator();
        while(it.hasNext()){
            System.out.println("Iteraor "+it.next());
        }

        for(Integer element: al){
            System.out.println("The element is "+element);
        }
    }
}
