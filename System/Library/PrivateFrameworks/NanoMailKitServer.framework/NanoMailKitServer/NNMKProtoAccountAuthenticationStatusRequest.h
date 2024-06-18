@interface NNMKProtoAccountAuthenticationStatusRequest : PBRequest <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
