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
		
		int[] chars = new int[26];
		for(int i=0;i<string.length();i++) {
			chars[string.charAt(i)-'a']++;
		}
		
		int max=0, idx=0;
		for(int i=0;i<26;i++) {
			if(max<chars[i]) {
				max=chars[i];
				idx=i;
			}
		}
		bw.write(idx+'a');
		
		bw.close();
	} // end of main()
} // end of Main class