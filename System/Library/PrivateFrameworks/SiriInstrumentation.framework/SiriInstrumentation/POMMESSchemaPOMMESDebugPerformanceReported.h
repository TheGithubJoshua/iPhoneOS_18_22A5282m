@class NSArray, NSData;

@interface POMMESSchemaPOMMESDebugPerformanceReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *performanceMeasurements;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)performanceMeasurementsAtIndex:(unsigned long long)a0;
- (void)addPerformanceMeasurements:(id)a0;
- (void)clearPerformanceMeasurements;
- (void)deletePerformanceMeasurements;
- (unsigned long long)performanceMeasurementsCount;

@end
