import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int k = Integer.valueOf(br.readLine());
		int l = Integer.valueOf(br.readLine());
		int m = Integer.valueOf(br.readLine());
		int n = Integer.valueOf(br.readLine());
		int d = Integer.valueOf(br.readLine());
		
		int cnt=0;
		for(int i=1;i<=d;i++) {
			if(i%k==0||i%l==0||i%m==0||i%n==0) {
				cnt++;
			}
		}
		bw.write(Integer.toString(cnt));
		
		bw.close();
	} // end of main()
} // end of Main class