@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICWiFiManager : NSObject <ICEnvironmentMonitorObserver> {
    struct __SCPreferences { } *_wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic, getter=isWiFiEnabled) BOOL wiFiEnabled;
@property (nonatomic, getter=isWiFiAssociated) BOOL wiFiAssociated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWiFiManager;

- (id)init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)_getWiFiEnabledFromPrefs;
- (BOOL)_getWiFiAssociated;
- (void)_wifiCallBack:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_processIdentifier;

@end
