@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    long long _loadCounter;
    NSArray *_loadedClasses;
}

@property (retain, nonatomic) OKProducerContent *content;

- (BOOL)_load;
- (id)init;
- (id)initWithURL:(id)a0;
- (unsigned long long)family;
- (id)backgroundColor;
- (id)contentIdentifier;
- (id)localizedName;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (void)dealloc;
- (BOOL)isLoaded;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (void)_unload;
- (id)audioURLs;
- (id)supportedResolutions;
- (void)_bundleDidLoad:(id)a0;
- (BOOL)hasLoadedClass:(Class)a0;
- (id)exportedClassNames;
- (BOOL)hasExportedClass:(Class)a0;
- (BOOL)loadRetain;
- (double)minimumContentVersion;
- (id)producerWithPresentation:(id)a0;
- (void)setupJavascriptContext:(id)a0;
- (void)unloadRelease;

@end
