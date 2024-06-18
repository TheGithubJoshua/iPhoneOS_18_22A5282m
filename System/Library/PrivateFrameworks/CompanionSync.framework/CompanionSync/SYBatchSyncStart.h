@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {
    struct { unsigned char estimatedChangeCount : 1; } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) BOOL hasEstimatedChangeCount;
@property (nonatomic) unsigned int estimatedChangeCount;

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

@end
