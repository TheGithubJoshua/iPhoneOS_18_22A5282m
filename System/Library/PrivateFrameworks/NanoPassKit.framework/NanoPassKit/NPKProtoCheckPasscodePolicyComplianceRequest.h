@interface NPKProtoCheckPasscodePolicyComplianceRequest : PBRequest <NSCopying> {
    struct { unsigned char enforcedPolicy : 1; unsigned char applyRestrictions : 1; } _has;
}

@property (nonatomic) BOOL hasEnforcedPolicy;
@property (nonatomic) int enforcedPolicy;
@property (nonatomic) BOOL hasApplyRestrictions;
@property (nonatomic) BOOL applyRestrictions;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEnforcedPolicy:(id)a0;
- (id)enforcedPolicyAsString:(int)a0;

@end
