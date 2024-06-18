@class SYMessageHeader, NSString;

@interface SYResetRequest : PBRequest <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (readonly, nonatomic) BOOL hasCancelSessionID;
@property (retain, nonatomic) NSString *cancelSessionID;

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
