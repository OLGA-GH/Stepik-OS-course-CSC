import java.util.*;

class Main {
	public static void main(String[] args) {
	// put your code here
	Scanner in = new Scanner(System.in);

	int[] inArray;
	int[] outArray;

	int N = in.nextInt(); 
	inArray = new int[N];
	outArray = new int[N];

	//inArray init
	for (int i = 0; i < N; i++){
			int a=in.nextInt();
			inArray[i]=a;
		}

	//outArray init		
	for (int i = 0; i < N; i++){
		outArray[i]=i;
		}
		
	for (int i = N - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (inArray[j] > inArray[j + 1]) {

                    int t1 = inArray[j];
                    inArray[j] = inArray[j + 1];
                    inArray[j + 1] = t1;
                
                    int t2 = outArray[j];
                    outArray[j] = outArray[j + 1];
                    outArray[j + 1] = t2;
                }
            }
        }		
 
	for (int i=0; i < N; i++){
		System.out.print(outArray[i]);
		if (i < (N-1)) System.out.print(" ");
		}
	}
}