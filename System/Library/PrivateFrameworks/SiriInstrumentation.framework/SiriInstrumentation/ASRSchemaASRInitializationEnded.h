@class NSData;

@interface ASRSchemaASRInitializationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char compilationDone : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL compilationDone;
@property (nonatomic) BOOL hasCompilationDone;
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
- (void)deleteCompilationDone;

@end
