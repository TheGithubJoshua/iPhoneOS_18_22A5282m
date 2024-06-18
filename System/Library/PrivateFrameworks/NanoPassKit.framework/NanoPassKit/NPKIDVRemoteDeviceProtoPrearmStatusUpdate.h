@interface NPKIDVRemoteDeviceProtoPrearmStatusUpdate : PBCodable <NSCopying>

@property (nonatomic) int prearmStatus;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPrearmStatus:(id)a0;
- (id)prearmStatusAsString:(int)a0;

@end
