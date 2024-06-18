@class NSMutableArray;

@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fetchResults;

+ (Class)fetchResultsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFetchResults:(id)a0;
- (void)clearFetchResults;
- (id)fetchResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)fetchResultsCount;

@end
