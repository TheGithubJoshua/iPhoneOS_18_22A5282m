@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (int)pid;
- (id)_newDispatchSourceForPid:(int)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)_handleCancelation;
- (void)removeRequestForKey:(id)a0;
- (void)addRequest:(id)a0 forKey:(id)a1;
- (id)initWithPid:(int)a0 queue:(id)a1;

@end
