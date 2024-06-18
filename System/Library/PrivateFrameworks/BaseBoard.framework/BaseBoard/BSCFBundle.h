@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)infoDictionary;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)bundlePath;
- (id)initWithURL:(id)a0;
- (id)executablePath;
- (id)initWithPath:(id)a0;
- (id)localizedInfoDictionary;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (struct __CFBundle { } *)cfBundle;
- (id)description;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (void)dealloc;
- (id)bundleIdentifier;

@end
