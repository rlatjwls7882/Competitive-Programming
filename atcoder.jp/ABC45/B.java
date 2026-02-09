import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String Sa = br.readLine();
		String Sb = br.readLine();
		String Sc = br.readLine();
		
		int idxA=0, idxB=0, idxC=0;
		char currentPlayer='a';
		while(true) {
			if(currentPlayer=='a') {
				if(idxA==Sa.length()) {
					bw.write('A');
					break;
				}
				idxA++;
				currentPlayer = Sa.charAt(idxA-1);
			} else if(currentPlayer=='b') {
				if(idxB==Sb.length()) {
					bw.write('B');
					break;
				}
				idxB++;
				currentPlayer = Sb.charAt(idxB-1);
			} else {
				if(idxC==Sc.length()) {
					bw.write('C');
					break;
				}
				idxC++;
				currentPlayer = Sc.charAt(idxC-1);
			}
		}
		
		bw.close();
	} // end of main()
} // end of Main class