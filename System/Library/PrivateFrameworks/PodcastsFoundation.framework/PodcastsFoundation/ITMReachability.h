@interface ITMReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

- (BOOL)connectionRequired;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (BOOL)startNotifier;
- (long long)networkStatusForFlags:(unsigned int)a0;

@end
