@class NSData;

@interface NMSMediaSyncServiceModelObject : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (retain, nonatomic) NSData *dataMultiverseID;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;

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
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;

@end
