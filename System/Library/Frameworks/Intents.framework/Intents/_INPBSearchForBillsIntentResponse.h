@class NSArray, NSString;

@interface _INPBSearchForBillsIntentResponse : PBCodable <_INPBSearchForBillsIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *bills;
@property (readonly, nonatomic) unsigned long long billsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)billsType;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addBills:(id)a0;
- (id)billsAtIndex:(unsigned long long)a0;
- (void)clearBills;

@end
