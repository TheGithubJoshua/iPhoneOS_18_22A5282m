@interface TSUNetworkReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _localWiFi;
}

@property (readonly, nonatomic) BOOL connectionRequired;
@property (readonly, nonatomic) long long status;

+ (id)networkReachabilityForLocalWiFi;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityForInternetConnection;
+ (long long)networkReachabilityStatusForDocumentResources;
+ (long long)networkReachabilityStatusForInternetConnection;
+ (long long)networkReachabilityStatusForLocalWiFi;
+ (id)networkReachabilityWithHostName:(id)a0;

- (id)init;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
