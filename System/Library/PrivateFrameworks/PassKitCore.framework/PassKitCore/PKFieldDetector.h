@class PKFieldProperties, NSString, NFLoyaltyAndPaymentSession, NFDigitalCarKeySession, NSHashTable, NSObject, NFFieldDetectSession;
@protocol NFSession, OS_dispatch_source, OS_dispatch_queue, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate> {
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupLoyaltySession;
    NFDigitalCarKeySession *_fieldPropertiesLookupDigitalCarKeySession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    unsigned long long _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    unsigned long long _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id<PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_endLookup;
- (void)unregisterObserver:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)_endLookupAndNotify;
- (void)_invalidateFieldDetectSession;
- (void)registerObserver:(id)a0;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)_startLookup;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (void)_startFieldDetectSession;
- (void)sessionDidEndUnexpectedly:(id)a0;
- (void).cxx_destruct;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;
- (void)session:(id)a0 didEndTransaction:(id)a1;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)dealloc;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)_restartFieldDetectSession;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)updateRadioState;

@end
