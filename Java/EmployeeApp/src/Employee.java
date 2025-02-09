public class Employee implements Comparable<Employee> {
    private String FullName;
    private Double salary;

    public String getFullName() {
        return FullName;
    }

    public void setFullName(String fullName) {
        FullName = fullName;
    }

    public Double getSalary() {
        return salary;
    } 

    public void setSalary(Double salary) {
        this.salary = salary;
    }

    public Employee(String fullName, Double salary) {
        FullName = fullName;
        this.salary = salary;
    }

    @Override
    public String toString() {
        return "Employee [FullName=" + FullName + ", salary=" + salary + ", toString()=" + super.toString() + "]";
    }

    @Override
    public int compareTo(Employee other) {
        if(other instanceof Employee){
          Employee emp = (Employee) other;//unboxing cast
          return (int) Math.round((this.getSalary() - emp.getSalary()));
          //return this.getFullName().compareTo(emp.getFullName());
        }
        throw new RuntimeException("An error occured.");
    }

    

    

    
    
}
