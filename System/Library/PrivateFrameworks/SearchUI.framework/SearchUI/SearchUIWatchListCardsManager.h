@class NSString, WLKCanonicalPlayablesResponse, NSHashTable, SearchUIWatchListState;

@interface SearchUIWatchListCardsManager : NSObject

@property (retain, nonatomic) NSHashTable *rowModels;
@property (retain, nonatomic) NSString *watchListIdentifier;
@property (retain, nonatomic) WLKCanonicalPlayablesResponse *response;
@property (retain, nonatomic) SearchUIWatchListState *watchListState;
@property (nonatomic) BOOL isInUpNext;

- (void).cxx_destruct;
- (BOOL)isTappable;
- (void)addWatchListRowModelObserver:(id)a0;
- (id)initWithWatchListIdentifier:(id)a0;

@end
