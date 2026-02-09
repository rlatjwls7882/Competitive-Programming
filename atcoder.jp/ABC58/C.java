import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		int n = Integer.valueOf(br.readLine());
		
		int[] minChars = new int[26];
		Arrays.fill(minChars, 50);
		
		while(n-->0) {
			int[] curChars = new int[26];
			String string = br.readLine();
			
			for(int i=0;i<string.length();i++) {
				curChars[string.charAt(i)-'a']++;
			}
			
			for(int i=0;i<26;i++) {
				minChars[i] = Math.min(minChars[i], curChars[i]);
			}
		}
		
		for(int i=0;i<26;i++) {
			while(minChars[i]-->0) {
				bw.write(i+'a');
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class