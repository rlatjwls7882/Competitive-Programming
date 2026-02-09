import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String w = br.readLine();
		
		int[] chars = new int[26];
		for(int i=0;i<w.length();i++) {
			chars[w.charAt(i)-'a']++;
		}
		
		boolean even=true;
		for(int i=0;i<26;i++) {
			if(chars[i]%2==1) {
				even=false;
				break;
			}
		}
		
		bw.write(even?"Yes":"No");
		
		bw.close();
	} // end of main()
} // end of Main class