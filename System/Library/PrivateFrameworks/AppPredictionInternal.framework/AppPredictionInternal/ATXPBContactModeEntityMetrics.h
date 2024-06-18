@class NSString;

@interface ATXPBContactModeEntityMetrics : PBCodable <NSCopying> {
    struct { unsigned char numUniqueIncomingInteractionSenders : 1; unsigned char numUniqueOutgoingInteractionRecipients : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasNumUniqueOutgoingInteractionRecipients;
@property (nonatomic) unsigned int numUniqueOutgoingInteractionRecipients;
@property (nonatomic) BOOL hasNumUniqueIncomingInteractionSenders;
@property (nonatomic) unsigned int numUniqueIncomingInteractionSenders;
@property (readonly, nonatomic) BOOL hasActivityState;
@property (retain, nonatomic) NSString *activityState;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
