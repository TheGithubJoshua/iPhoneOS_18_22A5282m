@class NSString, NSURL, NSNumber;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *genreTitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSURL *coverArtURL;
@property (copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic, getter=isLocal) NSNumber *local;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_mediaEntityPropertyDidChange:(id)a0;

@end
