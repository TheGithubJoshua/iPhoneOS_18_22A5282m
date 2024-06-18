@class NSString, _ICLLPlaybackItemContainer, _ICLLMediaInfo;

@interface _ICLLPlaybackItem : PBCodable <NSCopying> {
    long long _contributingParticipantId;
    _ICLLPlaybackItemContainer *_container;
    NSString *_itemId;
    NSString *_mediaId;
    _ICLLMediaInfo *_mediaInfo;
    int _sectionType;
    BOOL _isExplicit;
    struct { unsigned char contributingParticipantId : 1; unsigned char sectionType : 1; unsigned char isExplicit : 1; } _has;
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
