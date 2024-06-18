@class NSObject;
@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

- (id)init;
- (id)parameterOverridesFolderURL;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0;
- (id)parameterPlistForLanguage:(id)a0;
- (void).cxx_destruct;
- (id)loadContentsForPlistWithLanguage:(id)a0;
- (id)universalParameterPlist;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0 targetQueue:(id)a1 completion:(id /* block */)a2;

@end
