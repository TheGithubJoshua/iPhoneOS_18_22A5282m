@class NSData, NSString;

@interface AMSXDProtoMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *messageData;
@property (readonly, nonatomic) BOOL hasLogKey;
@property (retain, nonatomic) NSString *logKey;

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
