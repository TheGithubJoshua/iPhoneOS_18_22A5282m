@class NSData;

@interface POMMESSchemaPOMMESPegasusRequestKfedLatency : SISchemaInstrumentationMessage {
    struct { unsigned char overallLatencyInMs : 1; unsigned char banyanLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned int overallLatencyInMs;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (nonatomic) unsigned int banyanLatencyInMs;
@property (nonatomic) BOOL hasBanyanLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteBanyanLatencyInMs;
- (void)deleteOverallLatencyInMs;

@end
