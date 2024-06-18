@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

+ (id)requiredUserInfoPropertiesForModelKind:(id)a0;

- (void)setUserInfo:(id)a0 forItem:(id)a1;
- (BOOL)hasItemsOverStorageLimitForContainer:(id)a0;
- (BOOL)hasItemsOverStorageLimit;
- (void)setItems:(id)a0 forContainer:(id)a1;
- (id)initWithTarget:(unsigned long long)a0;
- (id)_info;
- (void)setOverStorageLimitBehavior:(unsigned long long)a0 forContainer:(id)a1;
- (void)_writeInfo;
- (id)_infoForContainer:(id)a0;
- (unsigned long long)statusForContainer:(id)a0;
- (void)synchronize;
- (void)_notifyInfoChanged;
- (float)progressForContainer:(id)a0;
- (void)_updateAggregateInfoIfNeeded;
- (unsigned long long)playabilityForContainer:(id)a0;
- (void)setUserInfoForModelObject:(id)a0 manuallyPinned:(BOOL)a1;
- (void)setOverStorageLimit:(BOOL)a0 forItem:(id)a1;
- (void)setStatus:(unsigned long long)a0 forItem:(id)a1;
- (BOOL)hasItemsWaitingWithoutPauseReason;
- (void)setUserInfo:(id)a0 forContainer:(id)a1;
- (id)_infoForItem:(id)a0;
- (unsigned long long)downloadPauseReasonForContainer:(id)a0;
- (void)setProgressBytes:(unsigned long long)a0 totalBytes:(unsigned long long)a1 forItem:(id)a2;
- (void)setDownloadPauseReason:(unsigned long long)a0 forItem:(id)a1;
- (unsigned long long)downloadPauseReason;
- (unsigned long long)status;
- (float)progress;
- (unsigned long long)_persistingOptions;

@end
