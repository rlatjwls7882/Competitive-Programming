import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int n = Integer.valueOf(br.readLine());
		String string = br.readLine();
		
		boolean[] chars = new boolean[26];
		for(int i=0;i<n;i++) {
			if(string.charAt(i)>='a') {
				chars[string.charAt(i)-'a']=true;
			} else {
				chars[string.charAt(i)-'A']=true;
			}
		}
		
		boolean pangram=true;
		for(int i=0;i<26;i++) {
			if(!chars[i]) {
				pangram=false;
				break;
			}
		}
		bw.write(pangram?"YES":"NO");
		
		bw.close();
	} // end of main()
} // end of Main class