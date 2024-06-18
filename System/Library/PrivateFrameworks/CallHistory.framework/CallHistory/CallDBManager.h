@class CHDeviceObserver, DBManager, NSString;

@interface CallDBManager : NSObject <CHDeviceObserverDelegate>

@property (retain, nonatomic) CHDeviceObserver *deviceObserver;
@property (retain, nonatomic) DBManager *dbManager;
@property BOOL deviceUnlocked;
@property unsigned char dataStoreType;
@property unsigned char notifyDataStoreChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataStoreName;
+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;

- (id)init;
- (void)createTemporary;
- (BOOL)notifyDataStoreChanged;
- (id)createManagedObjectContext;
- (BOOL)shouldCreateTemporary;
- (void)createDataStore;
- (void).cxx_destruct;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)a0;
- (void)handlePermanentCreated;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)handleTemporaryCreated;
- (BOOL)shouldCreatePermanent;

@end
