import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		LinkedList<Integer> list = new LinkedList<>();
		while(true) {
			int a = Integer.valueOf(br.readLine());
			list.push(a);
			if(a==0) {
				break;
			}
		}
		
		while(!list.isEmpty()) {
			bw.write(list.poll()+"\n");
		}
		
		bw.close();
	} // end of main()
} // end of Main class