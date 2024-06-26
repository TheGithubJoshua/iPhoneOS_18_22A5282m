@class NSString;

@interface WLKMovieClipAsset : NSObject

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, copy, nonatomic) NSString *durationString;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSString *url;

+ (id)movieClipAssetsWithArray:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)_init;
- (void).cxx_destruct;

@end
