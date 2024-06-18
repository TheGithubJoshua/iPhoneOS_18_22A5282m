@class NSString, NSMutableArray;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) BOOL hasStatusChangeType;
@property (retain, nonatomic) NSString *statusChangeType;
@property (retain, nonatomic) NSMutableArray *idsHandles;

+ (Class)idsHandlesType;

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
- (void)clearIdsHandles;
- (unsigned long long)idsHandlesCount;
- (void)addIdsHandles:(id)a0;
- (id)idsHandlesAtIndex:(unsigned long long)a0;

@end
