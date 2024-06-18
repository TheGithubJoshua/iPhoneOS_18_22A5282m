@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying> {
    struct { unsigned char numCapableAccessories : 1; unsigned char numEnabledAccessories : 1; unsigned char options : 1; unsigned char timestamp : 1; unsigned char isEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL hasNumEnabledAccessories;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) BOOL hasNumCapableAccessories;
@property (nonatomic) unsigned long long numCapableAccessories;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end