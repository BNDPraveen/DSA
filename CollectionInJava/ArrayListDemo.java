import java.sql.SQLOutput;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<Integer> value=new ArrayList<>();
        value.add(5);
        value.add(10);
        value.add(3);
        value.add(5);
        value.add(7);
        value.add(4);
        value.add(28);
        value.add(67);
        value.add(5);
        value.add(7);
        value.add(4);
        value.add(28);
        value.add(67);

        System.out.println(value.size());

        Collections.sort(value);
        for(int i:value){
            System.out.println(i);
        }

    }
}
