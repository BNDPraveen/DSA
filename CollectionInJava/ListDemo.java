import java.util.ArrayList;
import java.util.List;
import java.util.Collections;

public class ListDemo {
    public static void main(String[] args) {
        List<Integer> value=new ArrayList<>();
        value.add(5);
        value.add(6);
        value.add(7);
        value.add(1,10);
        Collections.sort(value);
        value.forEach(System.out::println);
    }
}
