@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JFXMediaItem

@property (copy, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSURL *localFileURL;

- (id)initWithURL:(id)a0;
- (id)info;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)canSaveToCameraRoll;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
