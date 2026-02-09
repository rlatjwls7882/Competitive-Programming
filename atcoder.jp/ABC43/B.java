import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Deque;
import java.util.LinkedList;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		String S = br.readLine();
		
		Deque<Character> deque = new LinkedList<>();
		for(int i=0;i<S.length();i++) {
			if(S.charAt(i)=='B') {
				if(!deque.isEmpty()) {
					deque.pollLast();
				}
			} else {
				deque.add(S.charAt(i));
			}
		}
		
		while(!deque.isEmpty()) {
			bw.write(deque.poll());
		}
		
		bw.close();
	} // end of main()
} // end of Main class