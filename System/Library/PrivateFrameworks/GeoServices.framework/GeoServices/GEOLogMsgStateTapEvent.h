@class NSMutableArray;

@interface GEOLogMsgStateTapEvent : PBCodable <NSCopying> {
    NSMutableArray *_searchResults;
    int _pinType;
    struct { unsigned char has_pinType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) BOOL hasPinType;
@property (nonatomic) int pinType;

+ (BOOL)isValid:(id)a0;
+ (Class)searchResultsType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (int)StringAsPinType:(id)a0;
- (void)addSearchResults:(id)a0;
- (void)clearSearchResults;
- (id)pinTypeAsString:(int)a0;
- (id)searchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchResultsCount;

@end
