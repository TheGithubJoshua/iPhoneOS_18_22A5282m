@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {
    struct { unsigned char resultType : 1; } _has;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
