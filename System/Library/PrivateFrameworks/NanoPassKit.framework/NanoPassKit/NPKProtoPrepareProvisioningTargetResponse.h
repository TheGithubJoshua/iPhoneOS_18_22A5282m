@class NSData;

@interface NPKProtoPrepareProvisioningTargetResponse : PBCodable <NSCopying> {
    struct { unsigned char wasFamilyCircle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedTargetData;
@property (retain, nonatomic) NSData *encryptedTargetData;
@property (nonatomic) BOOL hasWasFamilyCircle;
@property (nonatomic) BOOL wasFamilyCircle;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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