@class SISchemaAnnounceNotifications, NSData;

@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage {
    struct { unsigned char announceMessagesEnabled : 1; unsigned char announceCallsEnabled : 1; } _has;
}

@property (nonatomic) BOOL announceMessagesEnabled;
@property (nonatomic) BOOL hasAnnounceMessagesEnabled;
@property (nonatomic) BOOL announceCallsEnabled;
@property (nonatomic) BOOL hasAnnounceCallsEnabled;
@property (retain, nonatomic) SISchemaAnnounceNotifications *announceNotifications;
@property (nonatomic) BOOL hasAnnounceNotifications;
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
- (void)deleteAnnounceCallsEnabled;
- (void)deleteAnnounceMessagesEnabled;
- (void)deleteAnnounceNotifications;

@end
