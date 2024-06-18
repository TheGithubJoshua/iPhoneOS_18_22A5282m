@class NSMutableArray, IMDispatchTimer;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMDispatchTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)sharedInstance;
+ (id)keychainAccountForVersion:(unsigned long long)a0;

- (void)flushCache;
- (id)init;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (void)_reloadFromDictionaryLocked:(id)a0;
- (void)_setPurgeTimer;
- (void)_flush;
- (void).cxx_destruct;
- (id)registrationData;
- (void)_reloadFromKeychainLocked;
- (void)dealloc;

@end
