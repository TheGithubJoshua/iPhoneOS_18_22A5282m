@class _ICLLParticipantQuery;

@interface _ICLLParticipantChangeAction : PBCodable <NSCopying> {
    long long _participantId;
    _ICLLParticipantQuery *_participantQuery;
    int _status;
    struct { unsigned char participantId : 1; unsigned char status : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
