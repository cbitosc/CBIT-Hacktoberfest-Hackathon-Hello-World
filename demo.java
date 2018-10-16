import java.util.*;
public class array
{
	String name;
	int age;
	void employee(String name,int age)
	{
		this.name=name;
		this.age=age;
	}
 public static void main(String[] args)
  {
  	
  	employee e1 = new employee("sankeerth",18);
  	employee e2 = new employee("Sudeep",17);

  	ArrayList<employee> ar3 =new ArrayList<employee>();
  	ar3.add(e1);
  	ar3.add(e2);

  	Iterator<employee> it=ar3.Iterator();
  	while(it.hasnext())
  	{
  		employee emp=it.next();
  		System.out.println(emp.name);
  		System.out.println(emp.age);
  }	

 }
  	
}
