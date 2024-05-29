// import java.util.HashMap;
// public class testing_code {


//     public static void main(String[] args) {
//         int[] array = {1, 2, 3, 4, 5, 2, 3, 4, 2, 4, 5};
//         HashMap<Integer, Integer> frequencyMap = new HashMap<>();

//         for (int element : array) {
//             if (frequencyMap.containsKey(element)) {
//                 frequencyMap.put(element, frequencyMap.get(element) + 1);
//             } else {    
//                 frequencyMap.put(element, 1);
//             }
//         }
//         for (int key : frequencyMap.keySet()) {
//             System.out.println("Element " + key + " appears " + frequencyMap.get(key) + " times");
//         }
//         for(int i:frequencyMap.keySet()){
//             if(frequencyMap.get(i)>2){
//                 System.out.println(i+" "+frequencyMap.get(i));
//                 // System.out.println());
//             }
//         }
        
//     }
// }
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class testing_code {
    public static List<String> canDistributeChocolates(List<int[]> testCases) {
        List<String> results = new ArrayList<>();
        for (int[] caseData : testCases) {
            int friends = caseData[0];
            int chocolates = caseData[1];
            if (chocolates % friends == 0) {
                results.add("Yes");
            } else {
                results.add("No");
            }
        }
        return results;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of test cases: ");
        int t = scanner.nextInt();
        List<int[]> testCases = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            testCases.add(new int[]{n, m});
        }
        List<String> results = canDistributeChocolates(testCases);
        for (String result : results) {
            System.out.println(result);
        }
        scanner.close();
    }
}
