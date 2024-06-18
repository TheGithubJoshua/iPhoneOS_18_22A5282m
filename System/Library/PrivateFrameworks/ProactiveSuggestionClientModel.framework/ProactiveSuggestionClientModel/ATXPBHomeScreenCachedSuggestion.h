@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetIds;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetLayouts;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayoutKeys;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayouts;
@property (retain, nonatomic) NSMutableArray *fallbackSuggestions;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelIds;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelLayouts;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutListKeys;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutLists;

+ (Class)cachedAppPredictionPanelIdsType;
+ (Class)cachedAppPredictionPanelLayoutsType;
+ (Class)cachedSuggestedWidgetLayoutListKeysType;
+ (Class)cachedSuggestedWidgetLayoutListsType;
+ (Class)cachedSuggestionWidgetIdsType;
+ (Class)cachedSuggestionWidgetLayoutsType;
+ (Class)cachedTopOfStackLayoutKeysType;
+ (Class)cachedTopOfStackLayoutsType;
+ (Class)fallbackSuggestionsType;

- (void)addCachedSuggestedWidgetLayoutListKeys:(id)a0;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCachedAppPredictionPanelLayouts;
- (void)clearCachedAppPredictionPanelIds;
- (unsigned long long)cachedSuggestedWidgetLayoutListsCount;
- (id)dictionaryRepresentation;
- (id)cachedSuggestedWidgetLayoutListKeysAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestedWidgetLayoutLists;
- (void)copyTo:(id)a0;
- (id)cachedTopOfStackLayoutKeysAtIndex:(unsigned long long)a0;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addCachedTopOfStackLayouts:(id)a0;
- (void)addCachedSuggestedWidgetLayoutLists:(id)a0;
- (void)writeTo:(id)a0;
- (id)cachedTopOfStackLayoutsAtIndex:(unsigned long long)a0;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (unsigned long long)cachedTopOfStackLayoutKeysCount;
- (void)addFallbackSuggestions:(id)a0;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedTopOfStackLayoutsCount;
- (void)clearCachedTopOfStackLayouts;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (void)clearFallbackSuggestions;
- (void).cxx_destruct;
- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackSuggestionsCount;
- (BOOL)readFrom:(id)a0;
- (void)addCachedTopOfStackLayoutKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCachedSuggestionWidgetLayouts;
- (void)clearCachedSuggestedWidgetLayoutListKeys;
- (void)clearCachedTopOfStackLayoutKeys;
- (unsigned long long)cachedSuggestedWidgetLayoutListKeysCount;
- (void)clearCachedSuggestionWidgetIds;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (id)cachedSuggestedWidgetLayoutListsAtIndex:(unsigned long long)a0;
- (void)addCachedSuggestionWidgetIds:(id)a0;

@end
