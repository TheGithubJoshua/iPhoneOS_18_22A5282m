@class NSString;

@interface HDCodableMedicalCoding : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCodingSystem;
@property (retain, nonatomic) NSString *codingSystem;
@property (readonly, nonatomic) BOOL hasCodingVersion;
@property (retain, nonatomic) NSString *codingVersion;
@property (readonly, nonatomic) BOOL hasCode;
@property (retain, nonatomic) NSString *code;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (retain, nonatomic) NSString *displayString;

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
