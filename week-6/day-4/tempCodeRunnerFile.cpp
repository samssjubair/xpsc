uto ok= [&](ll mid){
            ll total=0;
            for(int i=0;i<n;i++){
                if(a[i]<mid){
                    total += (a[i] - mid);
                }
            }
            return total<=x;
        };

        ll l=1,r=1e12,mid,ans;
        while(l<=r){
            mid=(l+r)/2;
            if(ok(mid)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;