@class NSCache, NSString;

@interface CAMLLoader : NSObject <CAMLParserDelegate>

@property (retain, nonatomic) NSCache *resourceCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)CAMLParser:(id)a0 resourceForURL:(id)a1;
- (void).cxx_destruct;
- (void)CAMLParser:(id)a0 formatWarningString:(const char *)a1 arguments:(char *)a2 lineNumber:(unsigned long long)a3;
- (id)loadCAMLFile:(id)a0;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)CAMLParser:(id)a0 didLoadResource:(id)a1 fromURL:(id)a2;
- (void)CAMLParser:(id)a0 formatErrorString:(const char *)a1 arguments:(char *)a2 lineNumber:(unsigned long long)a3;

@end
