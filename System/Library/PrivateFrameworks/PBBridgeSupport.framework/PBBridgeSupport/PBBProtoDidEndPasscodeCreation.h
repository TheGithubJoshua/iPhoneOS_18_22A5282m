@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {
    struct { unsigned char isLong : 1; } _has;
}

@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasIsLong;
@property (nonatomic) BOOL isLong;

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
