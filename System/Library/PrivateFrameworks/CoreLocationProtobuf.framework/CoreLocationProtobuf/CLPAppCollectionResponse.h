@class NSString;

@interface CLPAppCollectionResponse : PBCodable <NSCopying>

@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasMsg;
@property (retain, nonatomic) NSString *msg;

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
