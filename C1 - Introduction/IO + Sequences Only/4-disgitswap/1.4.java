import java.util.*;

class digitswap {
    public static void main(String args[]) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        System.out.println(((x%10)*10 + (x/10)));
    }
}