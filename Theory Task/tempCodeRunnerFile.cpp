for(int i=0 ; i<len ; i++){
        if(S[i] != S[len-i]){
            pal = false;
            break;
        }
    }

    if(pal == true){
        cout << endl << "Your entered string is Palindrome." << endl;
    }
    else{
        cout << endl << "Your entered string is not Palindrome." << endl;
    }