@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying> {
    long long _cloudID;
    double _duration;
    double _fileSize;
    long long _storeAdamID;
    NSString *_albumArtistName;
    int _albumDiscCount;
    NSString *_albumName;
    int _albumTrackCount;
    NSString *_artistName;
    NSString *_composerName;
    int _contentType;
    NSString *_copyrightText;
    int _discNumber;
    NSString *_genreName;
    NSString *_playbackAuthorizationToken;
    NSString *_title;
    int _trackNumber;
    int _year;
    BOOL _isCompilation;
    struct { unsigned char cloudID : 1; unsigned char duration : 1; unsigned char fileSize : 1; unsigned char storeAdamID : 1; unsigned char albumDiscCount : 1; unsigned char albumTrackCount : 1; unsigned char contentType : 1; unsigned char discNumber : 1; unsigned char trackNumber : 1; unsigned char year : 1; unsigned char isCompilation : 1; } _has;
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
