@class NPSManager;

@interface NPHCountryCodeCompanionReplication : NSObject {
    NPSManager *_npsManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateActiveCountryCode;
- (void)_updateAndBroadcastCodeWithKey:(id)a0 usingFunction:(void /* function */ *)a1;
- (void)_updateHomeCountryCode;
- (void)_updateNetworkCountryCode;

@end
