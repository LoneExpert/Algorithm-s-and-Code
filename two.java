import java.util.*;

public class two {    

public static long getMaxPairwiseProduct(int[] numbers) {        

int n = numbers.length;        

Arrays.sort(numbers);        

long maxProduct = (long) numbers[n - 1] * (long) numbers[n - 2];        return maxProduct;    

}    

public static void main(String[] args) {        

Scanner sc = new Scanner(System.in);       

int len = sc.nextInt();        

int[] numbers = new int[len];        

for (int i = 0; i < len; i++) {            

numbers[i] = sc.nextInt();        

} 

long maxProduct = getMaxPairwiseProduct(numbers);        System.out.println(maxProduct);    }}