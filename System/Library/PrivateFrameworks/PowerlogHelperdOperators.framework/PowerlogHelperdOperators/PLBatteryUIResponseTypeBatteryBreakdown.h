@class NSSet, NSDictionary, NSString, NSDate, NSMutableArray, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeBatteryBreakdown : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSMutableArray *buckets;
@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property (retain) NSDate *monotonicNow;
@property double bucketSize;
@property (retain) NSSet *rootNodeBundleIDs;
@property (retain) NSSet *nonAppBundleIDs;
@property (retain) NSSet *webAppBundleIDs;
@property (retain) NSSet *deletedAppBundleIDs;
@property (retain) NSSet *deletedAppClipBundleIDs;
@property (retain) NSSet *exchangeBundleIDs;
@property (retain) NSDictionary *nodeIDsToNodeNames;
@property (retain) NSDictionary *bundleIDsToDisplayNames;
@property (retain) NSDictionary *bundleIDsToReplacementBundleIDs;
@property (retain) NSDictionary *bundleIDsToForegroundTimes;
@property (retain) NSDictionary *bundleIDsToBackgroundTimes;
@property (retain) NSDictionary *bundleIDsToEnergyKeyForSlopAdjustment;
@property (retain) NSDictionary *pluginBundleIDsToEntries;
@property (retain) NSDictionary *lastBatteryEntry;
@property (retain) NSSet *intermediateRootNodes;
@property (retain) NSDictionary *rootNodeIDToRootNodeEnergyKeys;
@property BOOL hasHomeKit;
@property BOOL gizmoConnected;
@property BOOL isSlopAdjustmentEnabled;
@property double lastUpgradeTimestamp;
@property double dataDuration;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (id)dependencies;
- (void)run;
- (void)addQualifiers:(id)a0;
- (void)coalesce;
- (void)addTotalEnergy:(id)a0;
- (void)adjustExtensionBackgroundTimeWithEnergyEntries:(id)a0;
- (BOOL)canSetQualifier:(int)a0 forBundleID:(id)a1;
- (id)combineQualifiers:(id)a0;
- (void)populateBLDKeysWithEnergyEntries:(id)a0;
- (void)populateEnergyBucketKeysWithEntries:(id)a0;
- (void)adjustRuntimes:(id)a0;
- (void)applyDynamicNameTransformation:(id)a0;
- (void)applyDisplayNameTransformation:(id)a0;
- (id)buildEnergyEntriesWithRootNodes:(id)a0 andQualificationNodes:(id)a1 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2;
- (void)initBackgroundLocationAudioTime;
- (void)addEntryTypes:(id)a0;
- (void)addErrorCode:(id)a0;
- (void)addFgEnergyForMetrics:(id)a0 qualificationID:(id)a1 rootNodeQualificationEnergy:(id)a2 energyEntry:(id)a3;
- (void)addRNEForMetrics:(id)a0 rootNodeEnergy:(id)a1 energyEntry:(id)a2;
- (void)addTotals:(id)a0;
- (void)adjustEnergyValues:(id)a0;
- (void)applySlopAdjustment:(id)a0;
- (void)applyStaticNameTransformation:(id)a0;
- (void)bgLocationAudioTimeApps:(id)a0;
- (void)bgLocationAudioTimeRuntimes:(id)a0 bundleID:(id)a1;
- (id)buildBucketWithEnergyEntries:(id)a0 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (void)buildBucketsForRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (void)buildUtilityCache;
- (void)collapseEnergyEntries:(id)a0;
- (int)computeNumberOfBuckets;
- (void)enumerateBucketsUsingBlock:(id /* block */)a0;
- (void)filterEnergyEntries:(id)a0;
- (void)filterEnergyEntriesWithRuntimes:(id)a0;
- (BOOL)filterFgBg:(id)a0 filterArray:(id)a1;
- (struct _PLTimeIntervalRange { double x0; double x1; })generateRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)getAppRuntimesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getBundleIDToBackgroundTimeMap;
- (id)getBundleIDToDisplayNameMap;
- (id)getBundleIDToForegroundTimeMap;
- (id)getBundleIDToReplacementBundleIDMap;
- (id)getBundleIDsToEnergyKeyForSlopAdjustmentMap;
- (double)getDataDurationFromRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (struct _PLTimeIntervalRange { double x0; double x1; })getDataRange:(id)a0;
- (id)getDeletedAppBundleIDs;
- (id)getDeletedAppClipBundleIDs;
- (id)getEnergyEntry:(id)a0 forBundleID:(id)a1;
- (short)getEnergyMetricBucketForRootNodeID:(id)a0;
- (double)getEnergyToRemoveForSlopAdjustment:(id)a0 withEnergyKey:(id)a1 forBucket:(id)a2;
- (id)getExchangeBundleIDs;
- (id)getInstalledPluginEntries;
- (id)getIntermediateRootNodes;
- (id)getLastBatteryEntry;
- (id)getNodeEntriesForEntryKey:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 andTimeInterval:(double)a2;
- (id)getNodeIDToNodeNameMap;
- (id)getNonAppBundleIDs;
- (id)getNonAppRuntimesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withNow:(id)a1;
- (double)getNonAppRuntimesWith:(id)a0 identificationKey:(id)a1 andRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2 withNow:(id)a3;
- (id)getNotificationEntriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getPluginBundleIDToEntryMap;
- (id)getQualificationNodeEntriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withTimeInterval:(double)a1;
- (id)getRootNodeBundleIDs;
- (id)getRootNodeEntriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withTimeInterval:(double)a1;
- (id)getRootNodeIDToRootNodeEnergyKeys;
- (void)getStaticData;
- (id)getWebAppBundleIDs;
- (BOOL)gizmoConnectedInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (BOOL)hasHomeKitEvents;
- (void)identifyBucket:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (void)initializeBucketsWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (void)populateBackgroundLocationAudioTime:(id)a0 bundleID:(id)a1;
- (void)populateInternalRootNodeEnergyKeys:(id)a0;
- (void)prepareBucketsWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)processAppTimeEntries:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withAppArray:(id)a2;
- (id)processNotificationEntries:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withAppArray:(id)a2;
- (id)processQualificationNodes:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)processRootNodes:(id)a0 inRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (void)reaccountBackupRestore:(id)a0;
- (void)reaccountExchangeEntries:(id)a0;
- (void)removeNotifications:(id)a0;
- (BOOL)shouldShowBreakdown:(id)a0;
- (void)transformCloudDocs:(id)a0;
- (void)transformDeletedApps:(id)a0;
- (void)transformGizmoDaemons:(id)a0;
- (void)transformPlugins:(id)a0;

@end