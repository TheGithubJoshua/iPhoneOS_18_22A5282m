@class NSString;

@interface GEOARPRating : PBCodable <NSCopying> {
    NSString *_displayedText;
    BOOL _rating;
    struct { unsigned char has_rating : 1; } _flags;
}

@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL rating;
@property (readonly, nonatomic) BOOL hasDisplayedText;
@property (retain, nonatomic) NSString *displayedText;

+ (BOOL)isValid:(id)a0;

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

@end
