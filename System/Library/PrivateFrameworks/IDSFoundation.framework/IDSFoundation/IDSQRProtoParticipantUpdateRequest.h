@interface IDSQRProtoParticipantUpdateRequest : PBRequest <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _participantIdLists;
    struct { unsigned char sessionStateCounter : 1; } _has;
}

@property (nonatomic) unsigned int operationFlags;
@property (readonly, nonatomic) unsigned long long participantIdListsCount;
@property (readonly, nonatomic) unsigned long long *participantIdLists;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addParticipantIdList:(unsigned long long)a0;
- (void)clearParticipantIdLists;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)a0;
- (void)setParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
