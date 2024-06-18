@class AVObservationController, NSMutableOrderedSet;

@interface AVSecondScreenController : NSObject

@property (readonly, nonatomic) AVObservationController *observationController;
@property (readonly, nonatomic) NSMutableOrderedSet *secondScreens;
@property (readonly, nonatomic) NSMutableOrderedSet *connections;
@property (nonatomic) BOOL allowsUpdatingActiveConnection;

+ (id)sharedInstance;

- (id)activeConnection;
- (id)_targetScreen;
- (id)init;
- (void)removeSecondScreen:(id)a0;
- (void)setPreferredConnection:(id)a0;
- (void)removeConnection:(id)a0;
- (id)addConnectionForPlayer:(id)a0 playerLayer:(id)a1;
- (void)addConnection:(id)a0;
- (void).cxx_destruct;
- (id)_connectionForPlayer:(id)a0;
- (id)connectionPassingTest:(id /* block */)a0;
- (void)_insertConnection:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)_updateActiveConnection;
- (void)addSecondScreen:(id)a0;
- (id)preferredConnection;

@end
