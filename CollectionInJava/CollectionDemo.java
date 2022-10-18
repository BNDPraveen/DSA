import java.util.ArrayList;
import java.util.Collection;

public class CollectionDemo {
    public static void main(String[] args) {
        Collection<Integer> value=new ArrayList<>();
        value.add(5);
        value.add(10);
        value.add(15);
        value.add(17);
        value.remove(15);

        for(int i: value){
            System.out.println(i);
        }
    }
}
