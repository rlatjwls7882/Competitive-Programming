import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			int rating = Integer.valueOf(br.readLine());
			if(rating<=1399) {
				bw.write("Division 4\n");
			} else if(rating<=1599) {
				bw.write("Division 3\n");
			} else if(rating<=1899) {
				bw.write("Division 2\n");
			} else {
				bw.write("Division 1\n");
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class