@class NSString, NSArray, MapsSuggestionsMeCard, MapsSuggestionsRoutine, NSObject, NSMutableArray, MapsSuggestionsObservers, MapsSuggestionsContacts;
@protocol OS_dispatch_queue, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsShortcutStorage> _storage;
    id<MapsSuggestionsShortcutSuggestor> _suggestor;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    NSMutableArray *_hiddenShortcuts;
    MapsSuggestionsMeCard *_rawMeCard;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currCorrectedMeCard;
    NSArray *_rawHomeAddressStrings;
    NSArray *_rawWorkAddressStrings;
    NSArray *_rawSchoolAddressStrings;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromResourceDepot:(id)a0;
- (char)readMeCardWithHandler:(id /* block */)a0;
- (id)storage;
- (id)routine;
- (void)registerMeCardObserver:(id)a0;
- (char)moveShortcut:(id)a0 toIndex:(long long)a1 withSnapshot:(id)a2 handler:(id /* block */)a3;
- (void)meCardReader:(id)a0 didUpdateMeCard:(id)a1;
- (id)suggestor;
- (char)removeShortcuts:(id)a0 handler:(id /* block */)a1;
- (char)moveShortcutToFront:(id)a0 handler:(id /* block */)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (char)moveShortcut:(id)a0 beforeShortcut:(id)a1 handler:(id /* block */)a2;
- (char)moveShortcutToBack:(id)a0 handler:(id /* block */)a1;
- (char)proposeAdditionalShortcutsOfType:(long long)a0 handler:(id /* block */)a1;
- (char)moveShortcut:(id)a0 afterShortcut:(id)a1 handler:(id /* block */)a2;
- (void)test_sortMapsSuggestionsShortcuts:(id)a0;
- (id)test_setUpPlaceholdersIfNeeded:(id)a0 overlays:(id)a1;
- (char)addOrUpdateShortcuts:(id)a0 handler:(id /* block */)a1;
- (void)unregisterMeCardObserver:(id)a0;
- (id)initWithStorage:(id)a0 suggestor:(id)a1 contacts:(id)a2 routine:(id)a3;
- (char)loadAllShortcutsWithHandler:(id /* block */)a0;

@end
