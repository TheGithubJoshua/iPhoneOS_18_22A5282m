@class NSString, NSData, CKDPRecordType, CKDPParticipant;

@interface CKDPShareMetadata : PBCodable <NSCopying> {
    struct { unsigned char participantPermission : 1; unsigned char participantState : 1; unsigned char participantType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) BOOL hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (retain, nonatomic) CKDPParticipant *ownerParticipant;
@property (readonly, nonatomic) BOOL hasCallerParticipant;
@property (retain, nonatomic) CKDPParticipant *callerParticipant;
@property (nonatomic) BOOL hasParticipantPermission;
@property (nonatomic) int participantPermission;
@property (nonatomic) BOOL hasParticipantState;
@property (nonatomic) int participantState;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) int participantType;
@property (readonly, nonatomic) BOOL hasRootRecordType;
@property (retain, nonatomic) CKDPRecordType *rootRecordType;

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
- (int)StringAsParticipantType:(id)a0;
- (int)StringAsParticipantPermission:(id)a0;
- (int)StringAsParticipantState:(id)a0;
- (id)_participantPermissionCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantTypeCKLogValue;
- (id)participantPermissionAsString:(int)a0;
- (id)participantStateAsString:(int)a0;
- (id)participantTypeAsString:(int)a0;

@end
