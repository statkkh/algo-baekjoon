int lower_idx(int target, int len){
    int st = 0;
    int en = len;

    while(st < en){
        int mid = (st + en + 1) / 2;
        if(a[mid] >= target) en = mid;
        else st = mid+1;
    }
    return st;
}

int upper_idx(int target, int len){
    int st = 0;
    int en = len;

    while(st < en){
        int mid = (st + en + 1) / 2;
        if(a[mid] > target) en = mid;
        else st = mid+1;
    }
    return st;
}
