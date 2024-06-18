@class NSString;

@interface WFREPBAlertButton : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) int style;
@property (nonatomic) BOOL preferred;

- (void)mergeFrom:(id)a0;
- (id)styleAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)StringAsStyle:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
