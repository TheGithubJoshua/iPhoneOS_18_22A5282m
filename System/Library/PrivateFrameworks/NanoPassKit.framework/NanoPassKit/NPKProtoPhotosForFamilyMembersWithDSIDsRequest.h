@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requestDSIDs;

+ (Class)requestDSIDsType;

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
- (void)addRequestDSIDs:(id)a0;
- (void)clearRequestDSIDs;
- (id)requestDSIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestDSIDsCount;

@end
