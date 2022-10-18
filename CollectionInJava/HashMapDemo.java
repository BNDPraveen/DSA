import java.util.HashMap;

public class HashMapDemo{
    Scanner sc=new Scanner(System.in);
    Map<String,String> phonebook=new HashMap<String,String>();
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
        String name=sc.next();
        String number=sc.next();
        phonebook.put(name,number);
    }
    set<String> keys=values.keySet();
    for(String i : keys){
        System.out.println(i+":"+phonebook.get(i));
    }



}
