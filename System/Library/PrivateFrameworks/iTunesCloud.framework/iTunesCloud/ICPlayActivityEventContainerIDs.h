@class NSString;

@interface ICPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long adamID;
@property (readonly, copy, nonatomic) NSString *cloudAlbumID;
@property (readonly, nonatomic) unsigned long long cloudPlaylistID;
@property (readonly, copy, nonatomic) NSString *globalPlaylistID;
@property (readonly, copy, nonatomic) NSString *playlistVersionHash;
@property (readonly, copy, nonatomic) NSString *stationHash;
@property (readonly, copy, nonatomic) NSString *stationStringID;
@property (readonly, nonatomic) long long stationID;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
