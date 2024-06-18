@interface HealthUIAWDHealthUIOrganDonationErrorEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char errorType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasErrorType;
@property (nonatomic) int errorType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsErrorType:(id)a0;
- (id)errorTypeAsString:(int)a0;

@end
