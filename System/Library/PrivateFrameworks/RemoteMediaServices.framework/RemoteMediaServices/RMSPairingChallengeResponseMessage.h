@class NSString;

@interface RMSPairingChallengeResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; unsigned char userCancelled : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) BOOL hasCode;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) BOOL hasUserCancelled;
@property (nonatomic) BOOL userCancelled;

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
