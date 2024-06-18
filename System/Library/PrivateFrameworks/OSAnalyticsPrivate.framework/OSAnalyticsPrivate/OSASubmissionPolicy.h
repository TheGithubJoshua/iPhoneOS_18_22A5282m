@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, NSString;

@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSMutableSet *_allowOptOutByRouting;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_results;
}

@property BOOL ignoreProxies;
@property (readonly) BOOL hasTasking;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

- (void)persist;
- (id)shouldSubmitRouting:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)buildSubmissionTemplateForConfig:(id)a0;
- (id)_loadPreviousResults;
- (id)initWithTemplate:(id)a0 options:(id)a1;
- (void)registerRouting:(id)a0 result:(BOOL)a1;

@end
