@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *passSyncStateItems;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)passSyncStateItemsType;

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
- (void)addPassSyncStateItems:(id)a0;
- (void)clearPassSyncStateItems;
- (id)passSyncStateItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)passSyncStateItemsCount;

@end
