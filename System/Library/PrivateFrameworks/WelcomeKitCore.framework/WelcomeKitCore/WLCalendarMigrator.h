@class WLFeaturePayload, NSString, EKEventStore;

@interface WLCalendarMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource> {
    EKEventStore *_eventStore;
}

@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (void)enable;
- (id)init;
- (void)setState:(id)a0;
- (id)dataType;
- (id)contentType;
- (void).cxx_destruct;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)importWillBegin;
- (void)_importDataRecord:(id)a0 summary:(id)a1;
- (BOOL)accountBased;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
