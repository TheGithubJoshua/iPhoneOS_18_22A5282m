@class NSString, NSBundle, NSURL, NSDictionary;

@interface OKProducerBundle : NSObject {
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
}

@property (retain, nonatomic) NSString *bundleExtension;
@property (readonly, nonatomic) unsigned long long type;

- (id)infoDictionary;
- (id)init;
- (id)url;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)bundle;
- (void)dealloc;
- (id)identifier;
- (double)version;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)initWithURL:(id)a0 bundleType:(unsigned long long)a1;

@end
