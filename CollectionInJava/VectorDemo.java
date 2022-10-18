import java.util.Collections;
import java.util.Vector;


//vector-->dynamic array
public class VectorDemo {
    public static void main(String[] args) {
        Vector<Integer> v=new Vector<>();
        v.add(5);
        v.add(7);
        v.add(4);
        v.add(28);
        v.add(67);
        v.add(5);
        v.add(7);
        v.add(4);
        v.add(28);
        v.add(67);

        Collections.sort(v);

        v.remove(1);

        System.out.println("capacaity "+v.capacity());

        for(int i:v){
            System.out.println(i);
        }
    }
}
