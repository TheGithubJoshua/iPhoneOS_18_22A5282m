@class NSString, NSMutableArray;

@interface SIRINLUINTERNALNluRequestRule : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (readonly, nonatomic) BOOL hasLocaleId;
@property (retain, nonatomic) NSString *localeId;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) BOOL hasUserInterfaceIdiom;
@property (retain, nonatomic) NSString *userInterfaceIdiom;
@property (retain, nonatomic) NSMutableArray *turnInputRules;

+ (Class)turnInputRulesType;

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
- (void)addTurnInputRules:(id)a0;
- (void)clearTurnInputRules;
- (id)turnInputRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)turnInputRulesCount;

@end
