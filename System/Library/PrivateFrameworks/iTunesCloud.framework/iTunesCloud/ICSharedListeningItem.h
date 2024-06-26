@class NSString, ICLiveLinkIdentity, NSDictionary;

@interface ICSharedListeningItem : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier;
@property (readonly, nonatomic) BOOL isAutoPlayItem;
@property (readonly, copy, nonatomic) ICLiveLinkIdentity *contributorIdentity;
@property (readonly, copy, nonatomic) NSDictionary *playParams;
@property (readonly, copy, nonatomic) NSString *shortDescription;

+ (id)itemWithMediaIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_playParamsForPlaybackItemProto:(id)a0;
- (id)initWithProtobuf:(id)a0 identity:(id)a1;

@end
