@class NSString, NSArray, CKRecordZoneID, NSDate, NTPBPrivateZoneSyncState;
@protocol FCPrivateZoneSyncManagerDelegate;

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager> {
    BOOL _requiresBatchedSync;
    CKRecordZoneID *_recordZoneID;
    id<FCPrivateZoneSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateZoneSyncState *_currentState;
}

@property (readonly, nonatomic) NSDate *lastCleanDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObservers;
- (id)init;
- (BOOL)isDirty;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isAwaitingFirstSync;
- (void)markAsDirty;

@end
