@class NSString, NSPersistentHistoryTransaction;

@interface PLPersistentHistoryMarkerTransaction : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSPersistentHistoryTransaction *_transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransaction:(id)a0;
- (id)overrride_shortDescription;
- (void).cxx_destruct;
- (id)overrride_changeRequestForFetching;

@end
