@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (void)shutdown;
+ (id)sharedInstance;
+ (void)clientTransactionsRelease;
+ (void)setListeningPort:(const char *)a0 queue:(id)a1;

- (void)shutdown;
- (void).cxx_destruct;
- (void)clientTransactionsRelease;
- (void)setListeningPort:(const char *)a0 queue:(id)a1;

@end
