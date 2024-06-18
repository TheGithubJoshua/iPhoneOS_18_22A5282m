@class NSString, NSMutableArray;

@interface ATXPBSuggestionLayout : PBCodable <NSCopying> {
    struct { unsigned char layoutScore : 1; unsigned char numWidgetsInStack : 1; unsigned char layoutType : 1; unsigned char confidenceWarrantsSnappingOrNPlusOne : 1; unsigned char isLowConfidenceStackRotationForStaleStack : 1; unsigned char isNPlusOne : 1; unsigned char isValidForSuggestionsWidget : 1; } _has;
}

@property (nonatomic) BOOL hasLayoutType;
@property (nonatomic) int layoutType;
@property (nonatomic) BOOL hasLayoutScore;
@property (nonatomic) double layoutScore;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *oneByOneSuggestions;
@property (retain, nonatomic) NSMutableArray *oneByTwoSuggestions;
@property (retain, nonatomic) NSMutableArray *twoByTwoSuggestions;
@property (retain, nonatomic) NSMutableArray *oneByFourSuggestions;
@property (retain, nonatomic) NSMutableArray *twoByFourSuggestions;
@property (nonatomic) BOOL hasIsValidForSuggestionsWidget;
@property (nonatomic) BOOL isValidForSuggestionsWidget;
@property (nonatomic) BOOL hasConfidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne;
@property (nonatomic) BOOL hasIsNPlusOne;
@property (nonatomic) BOOL isNPlusOne;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) BOOL hasIsLowConfidenceStackRotationForStaleStack;
@property (nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;
@property (readonly, nonatomic) BOOL hasUuidOfHighestConfidenceSuggestion;
@property (retain, nonatomic) NSString *uuidOfHighestConfidenceSuggestion;
@property (nonatomic) BOOL hasNumWidgetsInStack;
@property (nonatomic) unsigned long long numWidgetsInStack;
@property (retain, nonatomic) NSMutableArray *fourByFourSuggestions;
@property (retain, nonatomic) NSMutableArray *fourByEightSuggestions;

+ (Class)fourByEightSuggestionsType;
+ (Class)fourByFourSuggestionsType;
+ (Class)oneByFourSuggestionsType;
+ (Class)oneByOneSuggestionsType;
+ (Class)oneByTwoSuggestionsType;
+ (Class)twoByFourSuggestionsType;
+ (Class)twoByTwoSuggestionsType;

- (void)clearOneByTwoSuggestions;
- (void)clearTwoByTwoSuggestions;
- (void)addOneByFourSuggestions:(id)a0;
- (id)layoutTypeAsString:(int)a0;
- (void)addTwoByFourSuggestions:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addTwoByTwoSuggestions:(id)a0;
- (id)fourByFourSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)oneByTwoSuggestionsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addFourByEightSuggestions:(id)a0;
- (void)clearOneByFourSuggestions;
- (unsigned long long)hash;
- (id)oneByTwoSuggestionsAtIndex:(unsigned long long)a0;
- (int)StringAsLayoutType:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearFourByEightSuggestions;
- (unsigned long long)twoByTwoSuggestionsCount;
- (unsigned long long)fourByEightSuggestionsCount;
- (void)addFourByFourSuggestions:(id)a0;
- (id)twoByTwoSuggestionsAtIndex:(unsigned long long)a0;
- (void)addOneByOneSuggestions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)oneByOneSuggestionsCount;
- (id)fourByEightSuggestionsAtIndex:(unsigned long long)a0;
- (id)twoByFourSuggestionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOneByTwoSuggestions:(id)a0;
- (unsigned long long)twoByFourSuggestionsCount;
- (id)oneByFourSuggestionsAtIndex:(unsigned long long)a0;
- (void)clearOneByOneSuggestions;
- (id)oneByOneSuggestionsAtIndex:(unsigned long long)a0;
- (void)clearTwoByFourSuggestions;
- (void)clearFourByFourSuggestions;
- (unsigned long long)fourByFourSuggestionsCount;
- (unsigned long long)oneByFourSuggestionsCount;

@end
