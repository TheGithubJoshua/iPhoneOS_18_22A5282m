@class NSMutableDictionary, ADCapService, NSMutableSet, ADDESRecordsManager;

@interface ADMetricManager : NSObject

@property (retain, nonatomic) ADCapService *capService;
@property (retain, nonatomic) NSMutableDictionary *activeAdvertisementsByInstanceID;
@property (retain, nonatomic) NSMutableSet *clickCapUpdated;
@property (retain, nonatomic) NSMutableSet *downloadCapUpdated;
@property (retain, nonatomic) NSMutableSet *frequencyCapUpdated;
@property (retain, nonatomic) ADDESRecordsManager *desRecordManager;

+ (id)sharedInstance;
+ (id)testInstance;

- (id)buttonStateToString:(long long)a0;
- (id)init;
- (id)frequencyCapTypeToString:(long long)a0;
- (void)getApp:(id)a0 buttonState:(long long)a1 withCompletion:(id /* block */)a2;
- (void)completed:(id)a0;
- (void)visible:(id)a0 start:(id)a1 duration:(double)a2;
- (void)adMarkerInteracted:(id)a0;
- (void)onScreen:(id)a0;
- (void)updateStoreKitAttribution:(id)a0 targetAdvertisement:(id)a1;
- (void)interacted:(id)a0;
- (void).cxx_destruct;
- (void)deactivateAdvertisementsByInstanceIDs:(id)a0;
- (long long)buttonStateToDownloadType:(long long)a0;
- (void)placed:(id)a0;
- (void)deactivateAllAdvertisements;
- (void)getApp:(id)a0 buttonState:(long long)a1 completion:(id /* block */)a2;
- (void)deactivateAdvertisements:(id)a0;
- (void)updateClickCap:(id)a0 targetAdvertisement:(id)a1;
- (void)replaceCapService:(id)a0;
- (void)received:(id)a0;
- (void)offScreen:(id)a0;
- (void)activateAdvertisements:(id)a0;

@end
