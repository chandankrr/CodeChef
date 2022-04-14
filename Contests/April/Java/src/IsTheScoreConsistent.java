import java.util.*;
import java.io.*;

public class IsTheScoreConsistent {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static class FastWriter {
        private final BufferedWriter bw;

        public FastWriter() {
            this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
        }

        public void print(Object object) throws IOException {
            bw.append("" + object);
        }

        public void println(Object object) throws IOException {
            print(object);
            bw.append("\n");
        }

        public void close() throws IOException {
            bw.close();
        }

    }

    public static void main(String[] args) {
        try {
            FastReader in = new FastReader();
            FastWriter out = new FastWriter();

            int tc = 1;
            tc = in.nextInt();
            while (tc-- > 0) {
                // write code here
                int a, b, c, d;
                a = in.nextInt();
                b = in.nextInt();
                c = in.nextInt();
                d = in.nextInt();

                int x = dif(a, c);
                int y = dif(b, d);

                if (x == -1 || y == -1)
                    System.out.println("IMPOSSIBLE");
                else
                    System.out.println("POSSIBLE");

            }

            out.close();
        } catch (Exception ignored) {
        }
    }

    public static int dif(int a, int b){
        if(a <= b)
            return b - a;

        return -1;
    }

}