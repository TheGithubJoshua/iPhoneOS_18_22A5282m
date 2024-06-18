@class NSString, TSClockManager, TSXTranslationClock;

@interface TSXClockManager : TSXClient <TSXClockManagerClientProtocol> {
    TSClockManager *_clockManager;
}

@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;
@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) TSXTranslationClock *translationClock;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (void)initialize;
+ (void)_setIsUnavailable;
+ (id)serverProtocol;
+ (void)_setIsAvailable;
+ (id)clientProtocol;

- (id)exportedObject;
- (id)availableClockIdentifiers;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (void)changedTranslationClockMaster;
- (id)initWithClockManager:(id)a0;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (void)interruptedConnection;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (void)updateTranslationClockState;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (void)updateTranslationClockTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;
- (BOOL)getTimeSyncTimeIsMachAbsoluteTime;
- (void)updateTranslationClockLockState:(int)a0;
- (unsigned long long)getTranslationClockIdentifier;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)getTimeSyncTimeClockIdentifier;

@end
