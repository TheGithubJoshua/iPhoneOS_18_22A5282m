@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)personalizedArticlesType;
+ (Class)mandatoryArticlesType;

- (unsigned long long)personalizedArticlesCount;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)mandatoryArticlesCount;
- (void)writeTo:(id)a0;
- (void)addPersonalizedArticles:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (void)clearMandatoryArticles;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)clearPersonalizedArticles;
- (void)addMandatoryArticles:(id)a0;

@end
