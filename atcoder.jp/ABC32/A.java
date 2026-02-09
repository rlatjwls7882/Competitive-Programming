import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int a = Integer.valueOf(br.readLine());
		int b = Integer.valueOf(br.readLine());
		int N = Integer.valueOf(br.readLine());
		
		for(int i=N;;i++) {
			if(i%a==0&&i%b==0) {
				bw.write(i+"\n");
				break;
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class