@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject {
    NSMutableArray *_mapItems;
    NSMutableArray *_signalPacks;
    NSMutableArray *_entries;
}

- (id)init;
- (id)signalPackForMapItem:(id)a0;
- (BOOL)insertMapItem:(id)a0 signalPack:(id)a1 entry:(id)a2;
- (void).cxx_destruct;

@end
