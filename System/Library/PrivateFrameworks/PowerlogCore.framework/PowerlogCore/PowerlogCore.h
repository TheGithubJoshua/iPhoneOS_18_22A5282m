@class NSDate, PPTCollectionOperator, PPTCoreStorage, PLAccountingOperator, PLCoreStorage, NSObject, PLCoreAgent, PLCoreService;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLAccountingOperator *accounting;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPTCoreStorage *coreStorage;
@property (readonly) PPTCollectionOperator *collection;

+ (BOOL)sharedCoreStarted;
+ (BOOL)isAudioAccessory;
+ (BOOL)allowRun;
+ (BOOL)shouldSetupCore;
+ (id)sharedCore;
+ (void)setupCore;
+ (void)deprecateOldFullMode;
+ (BOOL)isDebugEnabled;

- (id)init;
- (void)startCore;
- (void)setupForPreUnlockTelemetry;
- (void)stopCore;
- (void)didRecieveMemoryPressureWarning;
- (void).cxx_destruct;
- (void)startCoreForTest;
- (void)dealloc;

@end
