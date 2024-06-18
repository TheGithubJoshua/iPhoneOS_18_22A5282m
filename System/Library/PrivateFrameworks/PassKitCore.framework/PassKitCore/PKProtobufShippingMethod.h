@class NSString, PKProtobufCustomPrecisionAmount;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDetail;
@property (retain, nonatomic) NSString *detail;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;

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