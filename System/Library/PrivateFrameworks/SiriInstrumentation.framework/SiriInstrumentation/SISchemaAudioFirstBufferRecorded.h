@class SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaAudioFirstBufferRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char audioInputRoute : 1; } _has;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic) BOOL hasAudioInputRoute;
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID;
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
- (void)deleteHardwareInterfaceVendorID;
- (void)deleteAudioInputRoute;

@end
