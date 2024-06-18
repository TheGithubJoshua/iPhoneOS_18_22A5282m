@class NSString, NSData;

@interface NPKProtoRevokeShareForPassIdentifierRequest : PBRequest <NSCopying> {
    struct { unsigned char shouldCascade : 1; } _has;
}

@property (retain, nonatomic) NSString *passIdentifier;
@property (retain, nonatomic) NSData *shareData;
@property (nonatomic) BOOL hasShouldCascade;
@property (nonatomic) BOOL shouldCascade;

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
