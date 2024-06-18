@class NSMutableDictionary, NSDictionary, NSString, NSObject, MADAnalyticsEventSubmitter;
@protocol OS_dispatch_queue;

@interface MADAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    MADAnalyticsEventSubmitter *_coreEventSubmitter;
}

@property BOOL overrideClientNameAsTestTool;
@property BOOL prependClientNameWithTestTool;
@property (retain) NSMutableDictionary *assetTypeEventTracker;
@property (readonly) long long reportingLevel;
@property (readonly, nonatomic) NSDictionary *events;
@property (readonly, nonatomic) NSString *savePath;

- (id)init;
- (id)yesNoString:(BOOL)a0;
- (void)submitAllEvents;
- (id)initWithPath:(id)a0;
- (void)submitEvent:(id)a0;
- (void)submitEventsWithName:(id)a0;
- (BOOL)saveEventToDisk:(id)a0;
- (void)_queue_submitEvent:(id)a0;
- (void)removeAllEvents;
- (void)changeReportingLevel:(long long)a0;
- (void)removeEventsWithName:(id)a0;
- (void)setEvent:(id)a0;
- (void)recordDownloadAttemptForAssetType:(id)a0 clientName:(id)a1 baseUrl:(id)a2 relativePath:(id)a3 purpose:(id)a4 result:(id)a5 analyticsFileType:(id)a6 isAutoDownload:(BOOL)a7 isPallas:(BOOL)a8 pallasAssetAudience:(id)a9 isUserPriority:(BOOL)a10 bytesWritten:(id)a11 bytesTransferredEst:(id)a12 additionalData:(id)a13;
- (void).cxx_destruct;
- (id)removePrefix:(id)a0 fromString:(id)a1;
- (void)_queue_setEvent:(id)a0;
- (BOOL)eventRecordingEnabled;
- (void)_queue_submitAllEvents;
- (void)removeEvent:(id)a0;
- (void)recordEventWithName:(id)a0 payload:(id)a1;
- (void)recordDownloadSuccessForAssetType:(id)a0 notificationSuffix:(id)a1 fileType:(id)a2;
- (id)copyEventFromPath:(id)a0;
- (void)recordQueryAttemptForAssetType:(id)a0 clientName:(id)a1 purpose:(id)a2 result:(id)a3 assetCount:(id)a4 returnTypes:(id)a5 filtered:(BOOL)a6 requireSpecificAsset:(BOOL)a7;
- (BOOL)shouldRecordEventForAssetType:(id)a0;
- (id)nilToNoneString:(id)a0;

@end
