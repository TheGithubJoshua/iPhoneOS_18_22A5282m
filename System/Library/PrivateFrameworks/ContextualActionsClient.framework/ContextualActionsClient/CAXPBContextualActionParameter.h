@class NSString, NSData;

@interface CAXPBContextualActionParameter : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *parameterType;
@property (readonly, nonatomic) BOOL hasParameterMetadata;
@property (retain, nonatomic) NSData *parameterMetadata;

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
