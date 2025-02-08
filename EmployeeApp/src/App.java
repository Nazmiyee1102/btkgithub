import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        List<Employee> employees = Arrays.asList(
            new Employee("Ahmet Dağ", 27.0),
            new Employee("Sinan Çimen", 25.0),
            new Employee("Nazmiye Kurban", 21.0),
            new Employee("Merve Denizli", 29.0)
        );
        writeList(employees);

        Collections.sort(employees);
        System.out.println("After sorting:");
        writeList(employees);
    }

    private static void writeList(Iterable collection) {
        for (Object item : collection) {
            System.out.println(item);
        }
    }
}



    

 
    
