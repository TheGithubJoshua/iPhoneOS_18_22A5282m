@class NSData;

@interface ASRSchemaASRManualEditClassificationFailed : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteErrorCode;

@end