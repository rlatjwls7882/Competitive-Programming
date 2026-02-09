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
		int length = string.length();
		
		boolean check=true;
		for(int i=0;i<length;) {
			if(i+6<length&&string.substring(i, i+7).equals("dreamer")&&(i+7>=length||string.charAt(i+7)!='a')) {
				i+=7;
			} else if(i+5<length&&string.substring(i, i+6).equals("eraser")&&(i+6>=length||string.charAt(i+6)!='a')) {
				i+=6;
			} else if(i+4<length&&(string.substring(i, i+5).equals("erase")||string.substring(i, i+5).equals("dream"))) {
				i+=5;
			} else {
				check=false;
				break;
			}
		}
		
		bw.write(check?"YES":"NO");
		
		bw.close();
	} // end of main()
} // end of Main class