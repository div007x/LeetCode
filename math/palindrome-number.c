bool isPalindrome(int x) {
    int temp = x;
    long digit=0;
    if(x<0){
        return false;
    }
    else if(x==0){
        return true;
    }else{

    while(x>0){
        digit*=10;
        digit+=x%10;
        x/=10;
    }
    return (temp==digit)?true:false;

    }
}