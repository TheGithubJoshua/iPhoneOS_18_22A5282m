@class NSString;
@protocol MapsSuggestionsFirstUnlockProtocol;

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver, MapsSuggestionsCondition> {
    id<MapsSuggestionsFirstUnlockProtocol> _firstUnlock;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTrue;
- (id)objectForJSON;
- (id)init;
- (void)didRemoveLastObserver;
- (void)triggerFired:(id)a0;
- (void)didAddFirstObserver;
- (void).cxx_destruct;
- (id)initWithFirstLock:(id)a0;

@end
