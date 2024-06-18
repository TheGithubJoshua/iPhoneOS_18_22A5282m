@class NSString, NSData;

@interface SISchemaActiveAudioDevice : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorIdentifier;
@property (nonatomic) BOOL hasVendorIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) BOOL hasProductIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteProductIdentifier;
- (void)deleteVendorIdentifier;

@end
