@class SIRINLUINTERNALCCQROverrideTemplate, SIRINLUEXTERNALUserParse, SIRINLUINTERNALLVCOverrideValue;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCcqrOverrideTemplate;
@property (retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (readonly, nonatomic) BOOL hasUserParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *userParse;
@property (readonly, nonatomic) BOOL hasLvcOverrideValue;
@property (retain, nonatomic) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;

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
