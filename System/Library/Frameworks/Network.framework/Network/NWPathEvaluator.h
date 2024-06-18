@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (id)sharedDefaultEvaluator;
+ (void)initialize;
+ (void)savePathEvaluator:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;

- (id)init;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (BOOL)requestNexus;
- (id)initWithEvaluator:(id)a0 parameters:(id)a1;
- (BOOL)matchesEndpoint:(id)a0 parameters:(id)a1;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (unsigned long long)hash;
- (id)initWithListenParameters:(id)a0;
- (void).cxx_destruct;
- (id)copyPath;
- (BOOL)isEqual:(id)a0;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;
- (void)triggerPathAgentsIncludingVoluntary:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;

@end
