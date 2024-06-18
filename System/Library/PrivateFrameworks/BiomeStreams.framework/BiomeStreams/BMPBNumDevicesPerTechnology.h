@class NSString;

@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying> {
    struct { unsigned char number : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTechnologyString;
@property (retain, nonatomic) NSString *technologyString;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) int number;

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
