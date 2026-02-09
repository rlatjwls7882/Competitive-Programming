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
		
		int cnt=0;
		for(int i=0;i<n;i++) {
			if(string.charAt(i)=='A') {
				cnt++;
			}
		}
		
		if(cnt>n-cnt) {
			bw.write("Anton");
		} else if(cnt==n-cnt) {
			bw.write("Friendship");
		} else {
			bw.write("Danik");
		}
		
		bw.close();
	} // end of main()
} // end of Main class