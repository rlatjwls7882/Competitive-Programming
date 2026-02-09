import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String string = br.readLine();
		
		int[] nums = new int[3];
		for(int i=0;i<string.length();i+=2) {
			nums[string.charAt(i)-'1']++;
		}
		
		int cnt = string.length()/2;
		for(int i=0;i<3;i++) {
			while(nums[i]-->0) {
				bw.write(Integer.toString(i+1));
				if(cnt-->0) {
					bw.write('+');
				}
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class