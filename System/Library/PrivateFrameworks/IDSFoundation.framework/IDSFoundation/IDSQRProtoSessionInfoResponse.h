@class NSMutableArray;

@interface IDSQRProtoSessionInfoResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _lightweightParticipantIdLists;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerSubscribedStreamIds;
    struct { unsigned char generationCounter : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerSubscribedStreamIds;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long *lightweightParticipantIdLists;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)peerPublishedStreamsType;

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
- (void)dealloc;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)a0;
- (void)addLightweightParticipantIdList:(unsigned long long)a0;
- (void)addPeerPublishedStreams:(id)a0;
- (void)addPeerSubscribedStreamIds:(unsigned int)a0;
- (void)clearLightweightParticipantIdLists;
- (void)clearPeerPublishedStreams;
- (void)clearPeerSubscribedStreamIds;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)a0;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerPublishedStreamsCount;
- (void)setLightweightParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setPeerSubscribedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
