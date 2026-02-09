import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

	public static void main(String[] args) throws IOException {
		
		int t = Integer.valueOf(br.readLine());
		while(t-->0) {
			String string = br.readLine();
			ArrayList<Integer> list = new ArrayList<>();
			for(int i=0;i<string.length();i++) {
				if(string.charAt(i)!='0') {
					list.add((string.charAt(i)-'0')*(int)Math.pow(10, string.length()-1-i));
				}
			}
			
			bw.write(list.size()+"\n");
			for(int val:list) {
				bw.write(val+" ");
			}
			bw.newLine();
		}

		bw.close();
	} // end of main()
} // end of Main class