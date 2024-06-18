@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <NSCopying> {
    long long _storeAdamID;
    struct { unsigned char storeAdamID : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
