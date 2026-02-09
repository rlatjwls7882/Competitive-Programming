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
		
		boolean[] C = new boolean[26];
		for(int i=0;i<string.length();i++) {
			C[string.charAt(i)-'a']=true;
		}
		
		int cnt=0;
		for(int i=0;i<26;i++) {
			if(C[i]) {
				cnt++;
			}
		}
		
		if(cnt%2==0) {
			bw.write("CHAT WITH HER!");
		} else {
			bw.write("IGNORE HIM!");
		}
		
		bw.close();
	} // end of main()
} // end of Main class