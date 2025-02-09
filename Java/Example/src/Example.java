import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Example {
    public static void main(String[] args) throws Exception {
        List<Integer> salaries = Arrays.asList(60000, 15000, 35000, 40000, 55000);
        salaryList(salaries);

        Collections.sort(salaries);
        salaryList(salaries);
    }

    private static void salaryList(List<Integer> collection) {
        for (Integer item : collection) {
            System.out.println(item);
        }
    }
}
