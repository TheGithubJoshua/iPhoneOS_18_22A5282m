@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {
    struct { unsigned char wristDetectionDisabled : 1; } _has;
}

@property (retain, nonatomic) NSData *restrictions;
@property (nonatomic) BOOL hasWristDetectionDisabled;
@property (nonatomic) BOOL wristDetectionDisabled;

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
