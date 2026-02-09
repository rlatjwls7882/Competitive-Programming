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
		int N = Integer.valueOf(br.readLine());
		
		for(int i=0;i<5;i++) {
			for(int j=0;j<5;j++) {
				if(--N==0) {
					bw.write(string.charAt(i)+""+string.charAt(j)+"\n");
					i=j=5;
				}
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class