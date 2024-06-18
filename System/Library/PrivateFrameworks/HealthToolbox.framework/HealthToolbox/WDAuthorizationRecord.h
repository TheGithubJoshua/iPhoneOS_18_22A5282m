@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord *_internalAuthorizationRecord;
}

@property long long status;

- (id)init;
- (BOOL)requestedSharing;
- (BOOL)requestedReading;
- (void).cxx_destruct;
- (id)initWithInternalAuthorizationRecord:(id)a0;

@end
