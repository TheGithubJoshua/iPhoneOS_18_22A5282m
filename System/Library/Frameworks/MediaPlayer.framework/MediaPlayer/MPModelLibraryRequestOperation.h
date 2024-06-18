@class MPModelLibraryRequest;

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)_sanityCheckRequest;
- (void)execute;
- (id)_itemProperties;
- (void).cxx_destruct;
- (void)_insertPropertyCacheForEntityPID:(long long)a0 entityClass:(void *)a1 entityTranslator:(id)a2 translationContext:(id)a3 propertyCachesVector:(const void *)a4;
- (void)_executeLegacyRequest;
- (id)_libraryView;
- (id)_sectionProperties;
- (void)_executeNewRequest;

@end
