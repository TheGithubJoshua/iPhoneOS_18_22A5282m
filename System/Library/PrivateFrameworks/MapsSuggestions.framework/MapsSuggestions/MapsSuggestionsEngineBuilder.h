@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;
@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, MapsSuggestionsFullResourceDepot;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject>

@property (retain, nonatomic) id<MapsSuggestionsStrategy> strategy;
@property (retain, nonatomic) id<MapsSuggestionsLocationUpdater> locationUpdater;
@property (nonatomic) BOOL hasTracker;
@property (retain, nonatomic) NSMutableArray *sourceClasses;
@property (retain, nonatomic) NSMutableSet *includePreFilters;
@property (retain, nonatomic) NSMutableSet *includePostFilters;
@property (retain, nonatomic) NSMutableArray *includeImprovers;
@property (retain, nonatomic) NSMutableArray *includeDedupers;
@property (retain, nonatomic) NSMutableSet *excludePreFilters;
@property (retain, nonatomic) NSMutableSet *excludePostFilters;
@property (retain, nonatomic) NSMutableArray *excludeImprovers;
@property (retain, nonatomic) NSMutableArray *excludeDedupers;
@property (retain, nonatomic) NSMutableDictionary *titleFormatters;
@property (retain, nonatomic) id<MapsSuggestionsFullResourceDepot> resourceDepot;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forDevice;
+ (id)simpleStrategy;

- (id)init;
- (id)withTitleFormatter:(id)a0 forType:(long long)a1;
- (id)withImprovers:(id)a0;
- (id)withPostFilters:(id)a0;
- (id)withSourceClasses:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)withFavorites;
- (id)withDedupers:(id)a0;
- (id)withPreFilters:(id)a0;
- (id)withResourceDepot:(id)a0;
- (id)withLocationUpdater:(id)a0;
- (id)withoutTracker;

@end
