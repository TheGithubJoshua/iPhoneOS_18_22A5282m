@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVia;
@property (retain, nonatomic) NSString *via;
@property (readonly, nonatomic) BOOL hasRespondingInstance;
@property (retain, nonatomic) NSString *respondingInstance;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
