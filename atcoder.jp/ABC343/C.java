import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		long N = Long.valueOf(br.readLine());
		
		String res="";
		for(long i=1;;i++) {
			long cube = (long)Math.pow(i, 3);
			if(cube>N) {
				break;
			}
			String string = Long.toString(cube);
			if(isPalindrome(string)) {
				res=string;
			}
		}
		bw.write(res+"\n");
		
		bw.close();
	} // end of main()
	
	static boolean isPalindrome(String string) {
		int length = string.length();
		for(int i=0;i<length/2;i++) {
			if(string.charAt(i)!=string.charAt(length-1-i)) {
				return false;
			}
		}
		return true;
	} // end of isPalindrome()
} // end of Main class