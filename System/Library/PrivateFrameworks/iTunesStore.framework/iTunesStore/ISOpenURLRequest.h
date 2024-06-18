@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLBagKey;
@property (nonatomic) BOOL interruptsKeybagRefresh;
@property (nonatomic, getter=isITunesStoreURL) BOOL ITunesStoreURL;
@property (copy, nonatomic) NSString *targetIdentifier;

+ (id)openURLRequestWithURL:(id)a0;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURLBagKey:(id)a0;

@end
