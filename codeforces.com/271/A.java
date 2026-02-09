import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int year = Integer.valueOf(br.readLine());
		
		while(true) {
			year++;
			if(isDistinct(year)) {
				bw.write(Integer.toString(year));
				break;
			}
		}
		
		bw.close();
	} // end of main()
	
	static boolean isDistinct(int year) {
		int[] nums = new int[10];
		while(year!=0) {
			nums[year%10]++;
			year/=10;
		}
		
		for(int i=0;i<10;i++) {
			if(nums[i]>1) {
				return false;
			}
		}
		return true;
	} // end of isDistinct()
} // end of Main class