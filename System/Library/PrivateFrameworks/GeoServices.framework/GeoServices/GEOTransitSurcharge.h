@class NSMutableArray, PBUnknownFields;

@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    struct { unsigned char has_numberOfLegs : 1; unsigned char has_paymentType : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *surchargeUnits;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)surchargeUnitType;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)paymentTypeAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPaymentType:(id)a0;
- (id)jsonRepresentation;
- (void)addSurchargeUnit:(id)a0;
- (void)clearSurchargeUnits;
- (id)surchargeUnitAtIndex:(unsigned long long)a0;
- (unsigned long long)surchargeUnitsCount;

@end
