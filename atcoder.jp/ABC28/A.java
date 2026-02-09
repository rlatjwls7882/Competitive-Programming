import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int score = Integer.valueOf(br.readLine());
		
		if(score<=59) {
			bw.write("Bad\n");
		} else if(score<=89) {
			bw.write("Good\n");
		} else if(score<=99) {
			bw.write("Great\n");
		} else {
			bw.write("Perfect\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class