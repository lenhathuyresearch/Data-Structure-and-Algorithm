package Baitap;
import java.util.Arrays;
public class Bai7 {

	static int digitExtraction(int n)
	{
		int s = 0;
		while (n != 0)
		{
			s += n%10;
			n /=10;
		}
		return s;
	}
	
	static int usingRecursion(int n)
	{
		if (n < 9)
			return n;
		return n%10 + usingRecursion(n/10);
	}
	
	
	
	public static void main(String[] args) {
		int []test = {1, 7, 11, 789, 9876, 19986387};
		Arrays.stream(test).forEach(i -> {
			System.out.printf("Tổng các chữ số \"%d\" dùng digit extraction là %d\n", i, digitExtraction(i));
			System.out.printf("Tổng các chữ số \"%d\" dùng đệ quy là %d\n", i, usingRecursion(i));
			
			System.out.println();
		});
	}

}
