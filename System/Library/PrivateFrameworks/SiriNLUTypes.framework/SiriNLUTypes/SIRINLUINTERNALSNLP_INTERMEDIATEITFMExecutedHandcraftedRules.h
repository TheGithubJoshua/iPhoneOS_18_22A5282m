@class SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules, NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMExecutedHandcraftedRules : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRules;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;

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
