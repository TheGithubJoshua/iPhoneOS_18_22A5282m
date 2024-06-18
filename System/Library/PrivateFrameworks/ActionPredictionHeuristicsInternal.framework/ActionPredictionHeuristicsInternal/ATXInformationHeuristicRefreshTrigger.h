@class NSSet, NSMutableSet;
@protocol ATXInformationHeuristicRefreshTriggerDelegate;

@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {
    NSMutableSet *_registeredHeuristics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *registeredHeuristics;
@property (weak, nonatomic) id<ATXInformationHeuristicRefreshTriggerDelegate> delegate;

- (void)stopTriggeringRefreshForHeuristicIfAlready:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)startTriggeringRefreshForHeuristicIfNotAlready:(id)a0;
- (id)init;
- (void)_stop;
- (void)stopTriggeringRefreshForAllHeuristics;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void)dealloc;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;

@end
