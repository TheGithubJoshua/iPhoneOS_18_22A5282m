@class NSString, WFREPBError;

@interface WFREPBAlertRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasSelectedButton;
@property (retain, nonatomic) NSString *selectedButton;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

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
