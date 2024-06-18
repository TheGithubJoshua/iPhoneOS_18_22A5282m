@class NSData;

@interface PLUSSchemaPLUSRECTIFIPatternConstraint : SISchemaInstrumentationMessage {
    struct { unsigned char constraintType : 1; unsigned char constraintValue : 1; } _has;
}

@property (nonatomic) int constraintType;
@property (nonatomic) BOOL hasConstraintType;
@property (nonatomic) float constraintValue;
@property (nonatomic) BOOL hasConstraintValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteConstraintType;
- (void)deleteConstraintValue;

@end
