@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasStorageIdentifier;
@property (retain, nonatomic) NSData *storageIdentifier;
@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSData *contents;
@property (readonly, nonatomic) BOOL hasContentsTimestamp;
@property (retain, nonatomic) NSData *contentsTimestamp;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) NSData *position;
@property (readonly, nonatomic) BOOL hasPositionTimestamp;
@property (retain, nonatomic) NSData *positionTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
