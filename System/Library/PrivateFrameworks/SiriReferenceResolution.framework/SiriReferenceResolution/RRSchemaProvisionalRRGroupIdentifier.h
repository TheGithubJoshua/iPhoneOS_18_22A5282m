@class NSString, NSData;

@interface RRSchemaProvisionalRRGroupIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char seq : 1; } _has;
}

@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL hasGroupId;
@property (nonatomic) unsigned int seq;
@property (nonatomic) BOOL hasSeq;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;

@end
