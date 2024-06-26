@interface NTPBDate : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSince1970 : 1; } _has;
}

@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
