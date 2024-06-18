@class NSMutableArray;

@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>

@property (nonatomic) BOOL isValidBucketGroup;
@property (retain, nonatomic) NSMutableArray *articleInfoLists;

+ (Class)articleInfoListType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addArticleInfoList:(id)a0;
- (id)articleInfoListAtIndex:(unsigned long long)a0;
- (unsigned long long)articleInfoListsCount;
- (void)clearArticleInfoLists;

@end
