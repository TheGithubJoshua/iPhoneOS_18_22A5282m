@class NSString;

@interface NTKProtoMigration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) NSString *from;
@property (readonly, nonatomic) BOOL hasTo;
@property (retain, nonatomic) NSString *to;

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