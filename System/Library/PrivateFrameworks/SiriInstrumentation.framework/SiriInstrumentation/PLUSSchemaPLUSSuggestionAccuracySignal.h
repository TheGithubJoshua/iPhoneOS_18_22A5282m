@class NSData;

@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    struct { unsigned char signalType : 1; unsigned char signalSource : 1; } _has;
}

@property (nonatomic) int signalType;
@property (nonatomic) BOOL hasSignalType;
@property (nonatomic) int signalSource;
@property (nonatomic) BOOL hasSignalSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteSignalSource;
- (void)deleteSignalType;

@end
