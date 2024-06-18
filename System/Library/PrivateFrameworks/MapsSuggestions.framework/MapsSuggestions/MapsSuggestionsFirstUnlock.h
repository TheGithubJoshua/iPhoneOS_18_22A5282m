@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (BOOL)hasDeviceBeenUnlocked;

@end
