@class NSString, NSData;

@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying> {
    struct { unsigned char homeKitMultiUserSettingsValueInteger : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasHomeKitMultiUserSettingsValueString;
@property (retain, nonatomic) NSString *homeKitMultiUserSettingsValueString;
@property (nonatomic) BOOL hasHomeKitMultiUserSettingsValueInteger;
@property (nonatomic) long long homeKitMultiUserSettingsValueInteger;
@property (readonly, nonatomic) BOOL hasHomeKitMultiUserSettingsValueData;
@property (retain, nonatomic) NSData *homeKitMultiUserSettingsValueData;

- (int)StringAsType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
