@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addRequest:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requestAtIndex:(unsigned long long)a0;
- (void)clearRequests;
- (unsigned long long)requestsCount;

@end
