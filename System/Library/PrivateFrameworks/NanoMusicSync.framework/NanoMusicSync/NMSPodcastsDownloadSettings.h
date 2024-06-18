@class NSMutableDictionary;

@interface NMSPodcastsDownloadSettings : NSObject <NSCopying> {
    long long _collectionType;
    NSMutableDictionary *_dictionary;
}

@property (nonatomic) long long numberOfEpisodes;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithCollectionType:(long long)a0 dictionary:(id)a1;
- (id)initWithCollectionType:(long long)a0;
- (id)initWithCollectionType:(long long)a0 legacyDownloadSettingsDictionary:(id)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 legacyDownloadSettings:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
