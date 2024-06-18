@class NSString;

@interface BCSUrlPattern : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;

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
