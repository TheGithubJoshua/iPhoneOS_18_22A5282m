@class MapsSuggestionsUser, NSString, MapsSuggestionsFlightUpdater, MapsSuggestionsPortrait, MapsSuggestionsEventKit, MapsSuggestionsVirtualGarage, MapsSuggestionsRoutine, MapsSuggestionsMapsSync, MapsSuggestionsContacts, MapsSuggestionsShortcutManager;
@protocol MapsSuggestionsFlightRequester, MapsSuggestionsRoutineConnector, MapsSuggestionsPortraitConnector, MapsSuggestionsContactsConnector, MapsSuggestionsMapsSyncConnector, MapsSuggestionsVirtualGarageConnector, MapsSuggestionsNetworkRequester, MapsSuggestionsShortcutStorage, MapsSuggestionsSourceDelegate, MapsSuggestionsEventKitConnector, MapsSuggestionsShortcutSuggestor, MapsSuggestionsInsights;

@interface MapsSuggestionsSelfBuildingResourceDepot : NSObject <MapsSuggestionsFullResourceDepot, NSCopying> {
    NSString *_name;
    id<MapsSuggestionsSourceDelegate> _oneSourceDelegate;
    id<MapsSuggestionsNetworkRequester> _oneNetworkRequester;
    id<MapsSuggestionsRoutineConnector> _oneRoutineConnector;
    MapsSuggestionsRoutine *_oneRoutine;
    id<MapsSuggestionsPortraitConnector> _onePortraitConnector;
    MapsSuggestionsPortrait *_onePortrait;
    id<MapsSuggestionsEventKitConnector> _oneEventKitConnector;
    MapsSuggestionsEventKit *_oneEventKit;
    id<MapsSuggestionsVirtualGarageConnector> _oneVirtualGarageConnector;
    MapsSuggestionsVirtualGarage *_oneVirtualGarage;
    id<MapsSuggestionsMapsSyncConnector> _oneMapsSyncConnector;
    MapsSuggestionsMapsSync *_oneMapsSync;
    id<MapsSuggestionsContactsConnector> _oneContactsConnector;
    MapsSuggestionsContacts *_oneContacts;
    id<MapsSuggestionsShortcutStorage> _oneFavoritesStorage;
    id<MapsSuggestionsShortcutSuggestor> _oneFavoritesSuggestor;
    MapsSuggestionsShortcutManager *_oneFavorites;
    MapsSuggestionsUser *_oneUser;
    id<MapsSuggestionsInsights> _oneInsights;
    id<MapsSuggestionsFlightRequester> _oneFlightRequester;
    MapsSuggestionsFlightUpdater *_oneFlightUpdater;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)oneInsights;
- (id)oneMapsSync;
- (void)setOneSourceDelegate:(id)a0;
- (void)setOneVirtualGarage:(id)a0;
- (void)setOnePortrait:(id)a0;
- (void)setOneFlightUpdater:(id)a0;
- (id)oneRoutine;
- (id)oneRoutineConnector;
- (id)oneNetworkRequester;
- (id)oneEventKit;
- (void)setOneUser:(id)a0;
- (id)oneContactsConnector;
- (void)setOneMapsSyncConnector:(id)a0;
- (id)oneSourceDelegate;
- (id)oneFavoritesStorage;
- (id)oneUser;
- (id)oneMapsSyncConnector;
- (void).cxx_destruct;
- (void)setOneEventKit:(id)a0;
- (void)setOneRoutine:(id)a0;
- (void)setOneFlightRequester:(id)a0;
- (void)setOneRoutineConnector:(id)a0;
- (id)oneFlightUpdater;
- (void)setOneNetworkRequester:(id)a0;
- (void)setOneEventKitConnector:(id)a0;
- (id)onePortrait;
- (id)oneFavoritesSuggestor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOneContactsConnector:(id)a0;
- (id)oneFavorites;
- (void)setOneContacts:(id)a0;
- (id)oneVirtualGarageConnector;
- (id)oneContacts;
- (id)oneFlightRequester;
- (id)initWithName:(id)a0;
- (id)oneEventKitConnector;
- (id)oneVirtualGarage;
- (id)onePortraitConnector;
- (void)setOneInsights:(id)a0;
- (void)setOnePortraitConnector:(id)a0;
- (void)setOneVirtualGarageConnector:(id)a0;
- (void)setOneMapsSync:(id)a0;
- (void)setOneFavorites:(id)a0;

@end
