@class HDOntologyUpdateCoordinator;

@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider>

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)init;
- (long long)purgeSpaceForUrgency:(int)a0;
- (BOOL)pruneOntologyWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void).cxx_destruct;
- (long long)purgeableSpaceForUrgency:(int)a0;

@end
