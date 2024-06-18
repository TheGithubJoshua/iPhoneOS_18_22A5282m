@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (unsigned long long)articlesCount;
- (void)mergeFrom:(id)a0;
- (id)articlesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clearArticles;
- (void)addArticles:(id)a0;

@end
