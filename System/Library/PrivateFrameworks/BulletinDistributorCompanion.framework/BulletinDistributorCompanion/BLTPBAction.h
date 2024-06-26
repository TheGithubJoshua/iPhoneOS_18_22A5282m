@class NSString, NSData, BLTPBAppearance;

@interface BLTPBAction : PBCodable <NSCopying> {
    struct { unsigned char behavior : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BLTPBAppearance *appearance;
@property (nonatomic) int activationMode;
@property (readonly, nonatomic) BOOL hasLaunchURL;
@property (retain, nonatomic) NSString *launchURL;
@property (nonatomic) BOOL hasBehavior;
@property (nonatomic) int behavior;
@property (readonly, nonatomic) BOOL hasBehaviorParameters;
@property (retain, nonatomic) NSData *behaviorParameters;
@property (readonly, nonatomic) BOOL hasBehaviorParametersNulls;
@property (retain, nonatomic) NSData *behaviorParametersNulls;

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
