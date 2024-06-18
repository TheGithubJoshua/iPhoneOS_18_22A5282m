@class NSDate, HMHome, NSArray, HMAccessory, NSString, ANAccessorySettingsCache, NSMutableArray, HMHomeManager, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, ANAnalyticsDailyHomesProvider, DICHomeManagerProviding>

@property (class, readonly, nonatomic) unsigned long long defaultHomeOptions;

@property (readonly, nonatomic) NSArray *homesSupportingAnnounce;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableArray *homesLoadedCompletionHandlers;
@property (nonatomic) BOOL homesLoaded;
@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) NSMapTable *delegatesToQueues;
@property (readonly, nonatomic) NSDate *loadHomesStart;
@property (readonly, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly, nonatomic) ANAccessorySettingsCache *accessorySettingsCache;
@property (readonly, nonatomic) NSArray *allHomes;
@property (readonly, nonatomic) NSArray *homes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (id)_homeNamesForAccessoryForContext:(id)a0;
- (id)init;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)initWithCaching:(BOOL)a0 homeOptions:(unsigned long long)a1;
- (void)loadHomes:(id /* block */)a0;
- (void)accessoryDidUpdateSupportsAudioAnalysis:(id)a0;
- (id)_currentHomesWeAreIn;
- (id)_homesForContext:(id)a0;
- (void)loadHomeSynchronous;
- (void)accessoryDidUpdateName:(id)a0;
- (id)_findBestHomeNames;
- (void)home:(id)a0 didUpdateAccessControlForUser:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)initWithCaching:(BOOL)a0;
- (void)accessoryDidUpdateSupportsDropIn:(id)a0;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (id)homesWithRoomNames:(id)a0;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)_executeBlockForDelegates:(id /* block */)a0;
- (void)_notifyManagerLoadedHomes:(id)a0;
- (id)homeNamesForContext:(id)a0;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (id)homeWithName:(id)a0;
- (BOOL)isEndpointWithUUID:(id)a0 inRoomWithName:(id)a1;
- (void)registerDelegate:(id)a0 queue:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (id)homesWithZoneNames:(id)a0;
- (id)homeForID:(id)a0;
- (BOOL)isLocalDeviceInRoom:(id)a0;

@end
