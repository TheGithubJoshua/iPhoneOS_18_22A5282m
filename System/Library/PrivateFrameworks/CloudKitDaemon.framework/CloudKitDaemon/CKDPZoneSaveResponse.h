@class CKDPDate, CKDPZoneCapabilities;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {
    struct { unsigned char expired : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

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
